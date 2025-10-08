#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA( std::string n, Weapon w ) : weapon(w), name(n)
{
}

void	HumanA::attack( void )
{
	std::cout << name << " attacks with their " << weapon.getType() << "\n";
}
