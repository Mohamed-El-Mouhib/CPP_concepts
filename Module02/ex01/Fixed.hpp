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

		Fixed( void );
		Fixed( const int );
		Fixed( const float );
		Fixed( const Fixed& );
		~Fixed( void );
	
		int toInt( void ) const;
		float toFloat( void ) const;

		Fixed& operator=( const Fixed& );
};

std::ostream& operator<<( std::ostream&, const Fixed& );

