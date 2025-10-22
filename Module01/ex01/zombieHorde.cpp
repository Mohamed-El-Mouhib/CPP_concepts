#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	void	*tmp = operator new(sizeof(Zombie) * N);
	Zombie	*ptr;

	if (!tmp) exit(1);

	ptr = static_cast<Zombie *>(tmp);

	for (int i = 0; i < N; i++)
	{
		new (&ptr[i]) Zombie( name );
		ptr[i].announce();
	}

	return ptr;
}

