#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// Animal* animal= new Animal(); 
	Cat* i = new Cat( "first" );
	//
	i->makeSound();
	//
	delete i;
	//
	return 0;
}
