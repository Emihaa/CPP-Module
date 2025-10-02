#include "WrongAnimal.hpp"
#include <string>

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor has been called." << std::endl;	
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	_type = copy._type;
	std::cout << "WrongAnimal copy constructor has been called." << std::endl;		
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& copy)
{
	_type = copy._type;
	std::cout << "WrongAnimal copy assignment has been called." << std::endl;		
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor has been called." << std::endl;	
}

void WrongAnimal::makeSound() const
{
	std::cout << "Kew kew" << std::endl;	
}

std::string WrongAnimal::getType() const
{
	return (_type);
}

