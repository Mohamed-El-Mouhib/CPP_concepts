#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog( void )
:Animal( "Dog" ), _brainptr(new Brain())
{
	std::cout << "Dog Default constructor Called!" << std::endl;
}

Dog::~Dog( void )
{
	delete _brainptr;
	std::cout << "Dog destructor Called!" << std::endl;
}

Dog::Dog( const Brain& brain )
:Animal( "Dog" ), _brainptr(new Brain())
{
	for (int i = 0; i < 100; ++i)
		_brainptr->ideas[i] = brain.ideas[i];
	std::cout << "Dog Parametrized constructor Called!" << std::endl;
}

Dog::Dog( const std::string& type )
:Animal( type ), _brainptr(new Brain())
{
	_type = type;
	std::cout << "Dog Parametrized constructor Called!" << std::endl;
}

Dog::Dog( const Dog& copy )
:Animal( copy._type ), _brainptr(new Brain())
{
	for (int i = 0; i < 100; i++)
		_brainptr->ideas[i] = copy._brainptr->ideas[i];
	_type = copy._type;
	std::cout << "Dog Copy constructor Called!" << std::endl;
}

Dog& Dog::operator=( const Dog& other )
{
	if (this != &other)
	{
		delete _brainptr;
		_brainptr = new Brain();
		for (int i = 0; i < 100; i++)
			_brainptr->ideas[i] = other._brainptr->ideas[i];
		_type = other._type;
	}

	return *this;
}

void	Dog::makeSound( void ) const
{
	std::cout << _type << " Woff Woff" << std::endl;
}
