#include "Zombie.hpp"

int main( void )
{
	Zombie	*ptr = zombieHorde(9, " horde ");

	for (int i = 0; i < 9; i++)
		ptr[i].~Zombie();
	operator delete(ptr);
}
