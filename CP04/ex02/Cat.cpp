#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal()
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << "Cat default constructor has been called." << std::endl;
}

Cat::Cat(const Cat& copy)
{
	_type = copy._type;
	_brain = new Brain(*copy._brain);
	std::cout << "Cat copy constructor has been called." << std::endl;
}

Cat &Cat::operator=(const Cat& copy)
{
	if (this != &copy)
	{	
		_type = copy._type;
		delete _brain;
		_brain = new Brain(*copy._brain);
	}
	std::cout << "Cat copy assignment has been called." << std::endl;
	return(*this);
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat destructor has been called." << std::endl;	
}

void Cat::makeSound() const
{
	std::cout << "Mew mew" << std::endl;
}