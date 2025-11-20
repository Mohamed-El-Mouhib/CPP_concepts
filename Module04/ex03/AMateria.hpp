#pragma once

#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string	type;

	public:
		AMateria( void );
		AMateria( std::string const& );
		AMateria( AMateria& );
		AMateria& operator=( const AMateria& );
		~AMateria( void );

		std::string const& getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};
