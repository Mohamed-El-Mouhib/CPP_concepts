#include "Fixed.hpp"

const int	Fixed::_scale = 8;

Fixed::Fixed( const int value ): _value( value * (1<<_scale) )
{
	std::cout << "int constructor called" << std::endl;
}

Fixed::Fixed( const float value ): _value( std::round(value * (1<< _scale)) )
{
	std::cout << "float constructor called" << std::endl;
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

std::ostream& operator<<( std::ostream& out, const Fixed& inserted )
{
	out << inserted.toFloat();
	return out;
}

int Fixed::getRawBits( void ) const
{
	return _value;
}

void Fixed::setRawBits( int const raw )
{
	_value = raw;
}

int Fixed::toInt( void ) const
{
	return _value / (1 << _scale);
}

float Fixed::toFloat( void ) const
{
	return (float)_value / (1 << _scale);
}
