#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int  main (void)
{
	Animal* herd[10];
	
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			herd[i] = new Dog();
		else
			herd[i] = new Cat();
	}
	
	for (int i = 0; i < 10; i++)
		herd[i]->makeSound();
	
	for (int i = 0; i < 10; i++)
		delete herd[i];
	
	return (0);
}