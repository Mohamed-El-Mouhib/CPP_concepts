#include "Fixed.hpp"
#include <iostream>

const int	Fixed::_scale = 8;

Fixed::Fixed( const int value )
{
	std::cout << "int constructor called" << std::endl;
	_value = value;
}

Fixed::Fixed( const float value )
{
	std::cout << "float constructor called" << std::endl;
	_value = value;
}

Fixed::Fixed( void ): _value( 0 )
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &other )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=( const Fixed &other )
{
	if (this != &other)
		_value = other._value;
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}
std::ostream& Fixed::operator<<( std::ostream& cout, const Fixed& inserted)
{
	cout << inserted._value;
	return cout;
}
int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}
