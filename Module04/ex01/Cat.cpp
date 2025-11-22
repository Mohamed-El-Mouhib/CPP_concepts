#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat( void )
:Animal( "cat" ) ,_brainptr(new Brain())
{
	_type = "cat";
	std::cout << "Cat Default constructor Called!" << std::endl;
}

Cat::~Cat( void )
{
	delete _brainptr;
	std::cout << "Cat destructor Called!" << std::endl;
}

Cat::Cat( const Brain& brain )
:Animal( "cat" ) ,_brainptr(new Brain())
{
	for (int i = 0; i < 100; i++)
			_brainptr->ideas[i] = brain.ideas[i];
	std::cout << "Cat Parametrized constructor Called!" << std::endl;
}

Cat::Cat( const std::string& type )
:Animal( type ) ,_brainptr(new Brain())
{
	_type = type;
	std::cout << "Cat Parametrized constructor Called!" << std::endl;
}

Cat::Cat( const Cat& copy )
:Animal( copy._type ), _brainptr(new Brain())
{
	for (int i = 0; i < 100; i++)
		_brainptr->ideas[i] = copy._brainptr->ideas[i];
	std::cout << "Cat Copy constructor Called!" << std::endl;
}

Cat& Cat::operator=( const Cat& other )
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

void	Cat::makeSound( void ) const
{
	std::cout << _type << " Meow Meow" << std::endl;
}
