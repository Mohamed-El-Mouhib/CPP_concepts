#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB( std::string n ) : weapon( "hand" ), name(n)
{
}

void	HumanB::attack( void )
{
	std::cout << name << " attacks with their " << weapon.getType() << "\n";
}

void	HumanB::setWeapon( Weapon weapon )
{
	this->weapon = weapon;
}
