#pragma once

#include <iostream>

class Animal
{
	protected:
	std::string _type;
	
	public:
	Animal();
	Animal(const Animal& copy);
	Animal &operator=(const Animal& copy);
	virtual ~Animal();
	
	void setType(std::string type);
	std::string getType() const;
	virtual void makeSound() const = 0;
};