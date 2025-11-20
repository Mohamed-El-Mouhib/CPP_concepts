#pragma once

#include "AMateria.hpp"

class Cure: AMateria
{
	public:
		Cure( void );
		Cure( const Cure& );
		Cure( const std::string& );
		Cure&	operator=( const Cure& );
		~Cure( void );
};
