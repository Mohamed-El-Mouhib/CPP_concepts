#include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
	_type = "cat";
	std::cout << "WrongCat Default constructor Called!" << std::endl;
}
WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat destructor Called!" << std::endl;
}
WrongCat::WrongCat( const std::string& type )
{
	_type = type;
	std::cout << "WrongCat Parametrized constructor Called!" << std::endl;
}

WrongCat::WrongCat( const WrongCat& copy )
{
	_type = copy._type;
	std::cout << "WrongCat Copy constructor Called!" << std::endl;
}

WrongCat& WrongCat::operator=( const WrongCat& other )
{
	if (this != &other)
		_type = other._type;

	return *this;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << _type << " Meow Meow" << std::endl;
}
