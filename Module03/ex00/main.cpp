#include "ClapTrap.hpp"

int main( void )
{

	ClapTrap Obj( "Mohamed" );
	ClapTrap SecObj( "Ayoub" );

	Obj.attack( "Ayoub" );
	SecObj.takeDamage( 0 );

	Obj.attack( "Ayoub" );
	SecObj.takeDamage( 0 );

}
