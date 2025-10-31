#include "Fixed.hpp"

const int	Fixed::_scale = 8;

Fixed  Fixed::operator-( const Fixed& other ) { return Fixed(_value - other._value); }

Fixed  Fixed::operator*( const Fixed& other ) { return Fixed(toFloat() * other.toFloat()); }

bool Fixed::operator<( const Fixed& other ) const { return (_value < other._value); }

bool Fixed::operator<=( const Fixed& other ) const { return (_value <= other._value); }

bool Fixed::operator>( const Fixed& other ) const { return (_value > other._value); }

bool Fixed::operator>=( const Fixed& other ) const { return (_value >= other._value); }

bool Fixed::operator==( const Fixed& other ) const { return (_value == other._value); }

bool Fixed::operator!=( const Fixed& other ) const { return (_value != other._value); }

int Fixed::getRawBits( void ) const { return _value; }

void Fixed::setRawBits( int const raw ) { _value = raw; }

int Fixed::toInt( void ) const { return _value / (1 << _scale); }

float Fixed::toFloat( void ) const { return (float)_value / (1 << _scale); }

Fixed::Fixed( const Fixed &other ) { *this = other; }

Fixed::~Fixed( void ) { }

Fixed::Fixed( const int value ): _value( value << _scale ) { }

Fixed::Fixed( const float value ): _value( std::round(value * (1<< _scale)) ) { }

Fixed::Fixed( void ): _value( 0 ) { }

Fixed  Fixed::operator+( const Fixed& other ) { return Fixed(_value + other._value); }

Fixed& Fixed::max( Fixed& a, Fixed& b )
{
	if (a > b)
		return a;

	return b;
}

const Fixed& Fixed::max( const Fixed& a, const Fixed& b )
{
	if (a > b)
		return a;

	return b;
}

Fixed& Fixed::min( Fixed& a, Fixed& b )
{
	if (a > b)
		return b;

	return a;
}

const Fixed& Fixed::min( const Fixed& a, const Fixed& b )
{
	if (a > b)
		return b;

	return a;
}

std::ostream& operator<<( std::ostream& out, const Fixed& inserted )
{
	out << inserted.toFloat();

	return out;
}

Fixed& Fixed::operator=( const Fixed &other )
{
	if (this != &other)
		_value = other._value;

	return *this;
}

Fixed  Fixed::operator++( int )
{
	Fixed tmp(*this);
	++_value;

	return tmp;
}

Fixed&  Fixed::operator++( void )
{
	++_value;

	return *this;
}

Fixed&  Fixed::operator--( void )
{
	--_value;

	return *this;
}

Fixed  Fixed::operator--( int )
{
	Fixed tmp(*this);
	--_value;

	return tmp;
}
