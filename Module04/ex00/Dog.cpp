#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog( void )
:Animal( "dog" )
{
	std::cout << "Dog Default constructor Called!" << std::endl;
}
Dog::~Dog( void )
{
	std::cout << "Dog destructor Called!" << std::endl;
}
Dog::Dog( const std::string& type )
:Animal( type )
{
	_type = type;
	std::cout << "Dog Parametrized constructor Called!" << std::endl;
}

Dog::Dog( const Dog& copy )
:Animal( copy._type )
{
	std::cout << "Dog Copy constructor Called!" << std::endl;
}

Dog& Dog::operator=( const Dog& other )
{
	if (this != &other)
		_type = other._type;

	return *this;
}
void	Dog::makeSound( void ) const
{
	std::cout << _type << " Woff Woff" << std::endl;
}
