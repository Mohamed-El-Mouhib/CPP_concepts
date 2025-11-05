#include "Cat.hpp"

Cat::Cat( void )
{
	_type = "cat";
	std::cout << "Cat Default constructor Called!" << std::endl;
}
Cat::~Cat( void )
{
	std::cout << "Cat destructor Called!" << std::endl;
}
Cat::Cat( const std::string& type )
{
	_type = type;
	std::cout << "Cat Parametrized constructor Called!" << std::endl;
}

Cat::Cat( const Cat& copy )
{
	_type = copy._type;
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
