#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Cat* j = new Cat( "first" );
	Cat* i = new Cat( "second" );
	//
	j->makeSound();
	//
	*i = *j;
	//
	delete j;
	//
	i->makeSound();
	//
	delete i;
	//
	return 0;
}
