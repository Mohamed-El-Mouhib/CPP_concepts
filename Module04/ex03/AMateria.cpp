#include "AMateria.hpp"

AMateria::AMateria( void )
:_type( "AMateria" )
{
}

AMateria::AMateria( std::string const& type )
:_type( type )
{
}

AMateria::AMateria( AMateria& another )
:_type( another._type )
{
}

AMateria& AMateria::operator=( const AMateria& another )
{
	if (this != &another)
		_type = another._type;

	return *this;
}

AMateria::~AMateria( void )
{
}

std::string const& AMateria::getType() const //Returns the materia type
{
	return _type;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}
