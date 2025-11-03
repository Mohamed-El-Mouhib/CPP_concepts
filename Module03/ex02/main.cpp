#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
	FragTrap	Fobj;
	{
		ScavTrap	Sobj( "Excalibur" );
		{
			ClapTrap	Cobj( "Pridwen" );

			for (int i = 0; i < 3; i++)
				Fobj.attack( "Pridwen" );
			Sobj.attack( "Pridwen" );
			Cobj.takeDamage( 110 );
		}
		for (int i = 0; i < 4; i++)
			Fobj.attack( "Excalibur" );
		Sobj.takeDamage( 120 );
	}
	Fobj.highFivesGuys();
}
