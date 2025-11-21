#pragma once

#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure( void );
		Cure( const Cure& );
		Cure&	operator=( const Cure& );
		~Cure( void );

		Cure* clone() const ;
		void use(ICharacter& target);
};
