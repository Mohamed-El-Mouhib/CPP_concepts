#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain Default constructor Called!" << std::endl;
}
Brain::~Brain( void )
{
	std::cout << "Brain destructor Called!" << std::endl;
}

Brain::Brain( const Brain& copy )
{
	for (int i = 0; i < 100; i++)
		ideas[i] = copy.ideas[i];
	std::cout << "Brain Copy constructor Called!" << std::endl;
}

Brain& Brain::operator=( const Brain& other )
{
	if (this != &other)
	{
		for (int i = 0; i < 100; ++i)
			ideas[i] = other.ideas[i];
	}
	return *this;
}
