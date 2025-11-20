#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* l = new WrongCat();
	//
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << l->getType() << " " << std::endl;
	//
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	l->makeSound();
	std::cout << "Anass was here!" << std::endl;
	//
	delete meta;
	delete j;
	delete i;

	return 0;
}
