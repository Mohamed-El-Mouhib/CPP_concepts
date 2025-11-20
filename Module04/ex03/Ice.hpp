#pragma once

#include "AMateria.hpp"
#include <string>

class Ice: AMateria
{
	public:
		Ice( void );
		Ice( const Ice& );
		Ice( const std::string& );
		Ice&	operator=( const Ice& );
		~Ice( void );
};
