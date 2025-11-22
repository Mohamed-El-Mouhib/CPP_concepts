#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria( void );
		AMateria( AMateria& );
		virtual ~AMateria( void );
		AMateria( std::string const& );
		AMateria& operator=( const AMateria& );

		std::string const& getType() const; //Returns the materia type

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
