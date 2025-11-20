#include "Animal.hpp"

Animal::Animal( void )
:_type( "DefaultAnimal" )
{
	std::cout << "Animal Default constructor Called!" << std::endl;
}
Animal::~Animal( void )
{
	std::cout << "Animal destructor Called!" << std::endl;
}
Animal::Animal( const std::string& type )
:_type( type )
{
	std::cout << "Animal Parametrized constructor Called!" << std::endl;
}

Animal::Animal( const Animal& copy )
:_type( copy._type )
{
	std::cout << "Animal Copy constructor Called!" << std::endl;
}

Animal& Animal::operator=( const Animal& other )
{
	if (this != &other)
		_type = other._type;

	return *this;
}

std::string	Animal::getType( void ) const
{
	return _type;
}
void	Animal::makeSound( void ) const
{
	std::cout << _type << " some Animal noises" << std::endl;
}
