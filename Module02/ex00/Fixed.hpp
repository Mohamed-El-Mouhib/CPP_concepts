#pragma once

#include <iostream>
#include <iomanip>

class	Fixed
{
	private:
		int	_value;
		static const int	_scale;
	public:
		int getRawBits( void ) const;
		void setRawBits( int const raw );

		Fixed( void );
		Fixed( Fixed &other );
		~Fixed( void );

		Fixed &operator=( const Fixed &other );
};
