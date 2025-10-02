#include "Animal.hpp"

Animal::Animal() : _type("")
{
	std::cout << "Animal default constructor has been called." << std::endl;
}

Animal::Animal(const Animal& copy)
{
	_type = copy._type;
	std::cout << "Animal copy constructor has been called." << std::endl;
}

Animal &Animal::operator=(const Animal& copy)
{
	if (this != &copy)
		_type = copy._type;
	std::cout << "Animal copy assignment has been called." << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor has been called." << std::endl;
}

std::string Animal::getType() const
{
	return(_type);
}

void Animal::setType(std::string type)
{
	_type = type;
}

void Animal::makeSound() const
{
	std::cout << "Oink oink" << std::endl;
}