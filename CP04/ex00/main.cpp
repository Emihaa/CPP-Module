#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int  main (void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << std::endl;	
	
	const WrongAnimal* e;
	e = new WrongAnimal();
	const WrongAnimal* p;
	p = new WrongCat();
	std::cout << std::endl;	
	
	// dog
	std::cout << j->getType() << " this animal says: ";
	j->makeSound();
	std::cout << std::endl;
	
	// cat
	std::cout << i->getType() << " this animal says: ";
	i->makeSound();
	std::cout << std::endl;
	
	// wrongCat
	std::cout << p->getType() << " this animal says: ";
	p->makeSound();
	std::cout << std::endl;
	
	e->makeSound(); // WrongAnimal
	meta->makeSound();	// Just Animal
	
	delete meta;
	delete j;
	delete i;
	delete e;
	delete p;
	
	return (0);
}