#include "Weapon.hpp"
#include <ostream>


Weapon::Weapon(std::string type)
{
	_type = type;
	std::cout << _type << " weapon has been created." << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << _type << " has been destroyed.\n" << std::endl;
}

// returns a constant reference
const std::string& Weapon::getType (void)
{
	return (_type);
}

void Weapon::setType(std::string type)
{
	std::cout << _type << " weapon type has been changed to: " << type << std::endl;
	_type = type;
}