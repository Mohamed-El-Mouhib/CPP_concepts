#include "Dog.hpp"

Dog::Dog( void )
{
	_type = "Dog";
	std::cout << "Dog Default constructor Called!" << std::endl;
}
Dog::~Dog( void )
{
	std::cout << "Dog destructor Called!" << std::endl;
}
Dog::Dog( const std::string& type )
{
	_type = type;
	std::cout << "Dog Parametrized constructor Called!" << std::endl;
}

Dog::Dog( const Dog& copy )
{
	_type = copy._type;
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
