#include "ScavTrap.hpp"

int main( void )
{
	ScavTrap Obj( "Arthre" );

	Obj.guardGate();
	{
		ClapTrap SecObj( "Pridwen" );
		Obj.attack( "Pridwen" );
		Obj.attack( "Pridwen" );
		Obj.attack( "Pridwen" );
		Obj.attack( "Pridwen" );
		Obj.attack( "Pridwen" );
		std::cout << std::endl;
		SecObj.takeDamage( 100 );
	}
}
