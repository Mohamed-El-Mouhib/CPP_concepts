#pragma once

#include <iostream>
#include <ostream>

class	Fixed
{
	private:
		int	_value;
		static const int	_scale;

	public:
		int	getRawBits( void ) const;
		void	setRawBits( int const raw );

		static const Fixed& max( const Fixed&, const Fixed& );
		static Fixed& max( Fixed&, Fixed& );
		static const Fixed& min( const Fixed&, const Fixed& );
		static Fixed& min( Fixed&, Fixed& );

		Fixed( void );
		Fixed( const int );
		Fixed( const float );
		Fixed( const Fixed& );
		~Fixed( void );
	
		int toInt( void ) const;
		float toFloat( void ) const;

		Fixed& operator=( const Fixed& );
		Fixed operator+( const Fixed& );
		Fixed operator-( const Fixed& );
		Fixed operator++( int );
		Fixed operator--( int );
		Fixed& operator--( void );
		Fixed& operator++( void );
		Fixed operator*( const Fixed& );
		bool operator<( const Fixed& ) const;
		bool operator<=( const Fixed& ) const;
		bool operator>( const Fixed& ) const;
		bool operator>=( const Fixed& ) const;
		bool operator==( const Fixed& ) const;
		bool operator!=( const Fixed& ) const;
};

std::ostream& operator<<( std::ostream&, const Fixed& );
