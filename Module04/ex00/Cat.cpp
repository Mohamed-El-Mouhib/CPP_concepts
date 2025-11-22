#include "Cat.hpp"

Cat::Cat( void )
:Animal( "cat" )
{
	std::cout << "Cat Default constructor Called!" << std::endl;
}
Cat::~Cat( void )
{
	std::cout << "Cat destructor Called!" << std::endl;
}
Cat::Cat( const std::string& type )
:Animal( type )
{
	std::cout << "Cat Parametrized constructor Called!" << std::endl;
}

Cat::Cat( const Cat& copy )
:Animal( copy._type )
{
	std::cout << "Cat Copy constructor Called!" << std::endl;
}

Cat& Cat::operator=( const Cat& other )
{
	if (this != &other)
		_type = other._type;

	return *this;
}
void	Cat::makeSound( void ) const
{
	std::cout << _type << " Meow Meow" << std::endl;
}
