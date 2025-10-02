#include "Cat.hpp"

Cat::Cat() : Animal()
{
	_type = "Cat";
	std::cout << "Cat default constructor has been called." << std::endl;
}

Cat::Cat(const Cat& copy)
{
	_type = copy._type;
	std::cout << "Cat copy constructor has been called." << std::endl;
}

Cat &Cat::operator=(const Cat& copy)
{
	if (this != &copy)
		_type = copy._type;
	std::cout << "Cat copy assignment has been called." << std::endl;
	return(*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor has been called." << std::endl;	
}

void Cat::makeSound() const
{
	std::cout << "Mew mew" << std::endl;
}