#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	_type = "Pig";
	std::cout << "WrongCat default constructor has been called." << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy)
{
	*this = copy;
	std::cout << "WrongCat copy constructor has been called." << std::endl;		
}

WrongCat &WrongCat::operator=(const WrongCat& copy)
{
	_type = copy._type;
	std::cout << "WrongCat copy has been called." << std::endl;		
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor has been called." << std::endl;	
}

void WrongCat::makeSound() const
{
	std::cout << "Ihahaaa" << std::endl;
}