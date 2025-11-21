#pragma once

#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice( void );
		Ice( const Ice& );
		Ice&	operator=( const Ice& );
		~Ice( void );

		Ice* clone() const ;
		void use(ICharacter& target);
};
