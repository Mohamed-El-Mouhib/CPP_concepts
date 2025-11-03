#include "DiamondTrap.hpp"

int main( void )
{
	DiamondTrap Obj( "Kendrick" );
	{
		FragTrap Sec( "Drake" );

		Sec.highFivesGuys();
		Obj.attack( "Drake" );
		Obj.attack( "Drake" );
	}
	Obj.whoAmI();
	std::cout << "Kendrick: I hate the way that you walk, the way that you talk, I hate the way that you dress" << std::endl;
	Obj.whoAmI();
}
