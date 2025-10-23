#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA( std::string n, Weapon& w )
: name(n), weapon(w)
{
}

void	HumanA::attack( void )
{
	std::cout << name << " attacks with their " << weapon.getType() << "\n";
}
