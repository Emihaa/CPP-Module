#include "Dog.hpp"

Dog::Dog() : Animal()
{
	_type = "Dog";
	std::cout << "Dog default constructor has been called." << std::endl;	
}

Dog::Dog(const Dog& copy)
{
	_type = copy._type;
	std::cout << "Dog copy constructor has been called." << std::endl;	
}

Dog &Dog::operator=(const Dog& copy)
{
	if (this != &copy)
		_type = copy._type;
	std::cout << "Dog copy assignment has been called." << std::endl;	
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor has been called." << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Bark bark" << std::endl;
}