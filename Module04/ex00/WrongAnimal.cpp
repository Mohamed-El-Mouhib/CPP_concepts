#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
:_type( "DefaultWrongAnimal" )
{
	std::cout << "WrongAnimal Default constructor Called!" << std::endl;
}
WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal destructor Called!" << std::endl;
}
WrongAnimal::WrongAnimal( const std::string& type )
:_type( type )
{
	std::cout << "WrongAnimal Parametrized constructor Called!" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& copy )
:_type( copy._type )
{
	std::cout << "WrongAnimal Copy constructor Called!" << std::endl;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& other )
{
	if (this != &other)
		_type = other._type;

	return *this;
}
std::string	WrongAnimal::getType( void ) const
{
	return _type;
}
void	WrongAnimal::makeSound( void ) const
{
	std::cout << _type << " some WrongAnimal noises" << std::endl;
}
