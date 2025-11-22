#include "Cure.hpp"

Cure::Cure( void )
: AMateria( "cure" )
{ }

Cure::Cure( const Cure& another )
:AMateria( another._type )
{ }

Cure& Cure::operator=( const Cure& another )
{
	if (this != &another)
		_type = another._type;

	return *this;
}

Cure::~Cure( void )
{ }

Cure* Cure::clone( void ) const
{
	return new Cure;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
