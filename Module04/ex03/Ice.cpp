#include "Ice.hpp"

Ice::Ice( void )
: AMateria( "ice" )
{
}

Ice::Ice( const Ice& another )
:AMateria( another._type )
{
}

Ice& Ice::operator=( const Ice& another )
{
	if (this != &another)
		_type = another._type;

	return *this;
}

Ice::~Ice( void )
{
}

Ice* Ice::clone( void ) const
{
	return new Ice;
}

void Ice::use( ICharacter& target )
{
	std::cout << "* Shoots an ice bolt at " << target.getName() << std::endl;
}
