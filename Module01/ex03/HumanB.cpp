#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB( std::string n ) : name(n)
{
	Weapon	tmp = Weapon( "hands" );
	weapon = &tmp;
}

void	HumanB::attack( void )
{
	std::cout << name << " attacks with their " << weapon->getType() << "\n";
}

void	HumanB::setWeapon( Weapon &weapon )
{
	this->weapon = &weapon;
}
