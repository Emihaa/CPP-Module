#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB (std::string name)
{
	_name = name;
	std::cout << _name << " appeared!" << std::endl;
}

HumanB::~HumanB (void)
{
	std::cout << _name << " has died." << std::endl;
}

void HumanB::attack (void)
{
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon (Weapon& weapon)
{
	_weapon = &weapon;
	std::cout << _name << " has got new weapon " << _weapon->getType() << std::endl;
}