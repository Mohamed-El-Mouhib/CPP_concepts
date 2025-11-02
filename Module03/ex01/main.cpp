#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <string>

int main( void )
{
	{
		ClapTrap Obj;

		Obj.attack( "Ayoub" );
	}
	std::cout << std::endl;
	{
		ScavTrap Obj( "steve" );

		Obj.attack( "Ayoub" );
		Obj.takeDamage(30);
		Obj.takeDamage(30);
		Obj.takeDamage(30);
	}
	std::cout << std::endl;
	{
		ClapTrap Obj;

		Obj = ScavTrap( "Marvele" );
		Obj.attack( "Ayoub" );
		Obj.takeDamage(30);
		Obj.takeDamage(30);
		Obj.takeDamage(30);
	}
}
