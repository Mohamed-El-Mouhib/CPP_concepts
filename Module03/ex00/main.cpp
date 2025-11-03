#include "ClapTrap.hpp"

int main( void )
{
	{
		ClapTrap Obj( "Mohamed" );

		Obj.attack( "Ayoub" );
		Obj.attack( "Redouane" );
		Obj.attack( "Anass" );
		Obj.attack( "Himself" );
		Obj.attack( "Elmokhtar" );

		Obj.beRepaired( 10 );
		Obj.beRepaired( 10 );
		Obj.beRepaired( 10 );
	}
	std::cout << std::endl;
	{
		ClapTrap Obj;

		Obj.attack( "Bogato" );
		Obj.attack( "Rd1" );
		Obj.attack( "Erabareta" );
		Obj.attack( "Arthre" );
	}
	return 0;
}
