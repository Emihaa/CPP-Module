#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int  main (void)
{
	Animal* herd[6];

	for (int i = 0; i < 6; i++)
	{
		if (i < 3)
			herd[i] = new Dog();
		else
			herd[i] = new Cat();
	}

	for (int i = 0; i < 6; i++)
		herd[i]->makeSound();

	for (int i = 0; i < 6; i++)
		delete herd[i];

	std::cout << std::endl;
	Dog	*temp = new Dog();
	
	std::cout << std::endl;
	Dog other = Dog(*temp);
	
	std::cout << std::endl;
	delete temp;
	
	std::cout << std::endl;
	return (0);
}
