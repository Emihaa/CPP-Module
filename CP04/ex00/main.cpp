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
	const WrongAnimal* e = new WrongAnimal();
	const WrongAnimal* p = new WrongCat();

	std::cout << std::endl;	
	std::cout << j->getType() << " this animal says: ";
	j->makeSound();
	std::cout << std::endl;
	std::cout << i->getType() << "  this animal says: ";
	i->makeSound();
	std::cout << std::endl;
	std::cout << p->getType() << "  this animal says: ";
	p->makeSound();
	std::cout << std::endl;
	
	e->makeSound(); //WrongAnimal
	meta->makeSound();	//WrongCat
	return (0);
}