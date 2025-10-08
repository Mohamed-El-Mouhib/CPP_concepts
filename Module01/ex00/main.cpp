#include "Zombie.hpp"

int main( void )
{
	Zombie zombie( "zombie" );
	zombie.announce();
	Zombie* genz;
	genz = newZombie( "newzombie" );
	genz->announce();
	randomChump( "random chump");
	delete genz;
}
