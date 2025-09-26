#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << "Dog default constructor has been called." << std::endl;	
}

Dog::Dog(const Dog& copy)
{
	*this = copy;
	std::cout << "Dog copy constructor has been called." << std::endl;	
}

Dog &Dog::operator=(const Dog& copy)
{
	_type = copy._type;
	_brain = new Brain(*copy._brain);
	std::cout << "Dog copy has been called." << std::endl;	
	return (*this);
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destructor has been called." << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Bark bark" << std::endl;
}