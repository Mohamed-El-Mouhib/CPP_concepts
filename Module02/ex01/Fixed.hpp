#pragma once

#include <iostream>
#include <iomanip>
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

		Fixed& operator=( const Fixed& );
		std::ostream& operator<<( const Fixed& );
};
