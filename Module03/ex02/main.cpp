#include "ScavTrap.hpp"
#include "FragTrap.hpp"
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
		FragTrap Obj( "steve" );

		Obj.attack( "Ayoub" );
		Obj.takeDamage(30);
		Obj.takeDamage(30);
		Obj.takeDamage(30);
		Obj.highFivesGuys();
	}
	std::cout << std::endl;
	{
		ClapTrap Obj;

		Obj = FragTrap( "Marvele" );
		Obj.attack( "Ayoub" );
		Obj.takeDamage(30);
		Obj.takeDamage(30);
		Obj.takeDamage(30);
	}
	std::cout << std::endl;
	{
		ClapTrap Obj;

		Obj = FragTrap( "Marvele" );
		Obj.attack( "Ayoub" );
		Obj.takeDamage(30);
	}
}
