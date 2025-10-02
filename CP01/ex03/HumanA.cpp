#include "HumanA.hpp"
#include "Weapon.hpp"
	
	
HumanA::HumanA (std::string name, Weapon& weapon) : _weapon(weapon)
{
	_name = name;
	std::cout << _name << " appeared with weapon " << _weapon.getType() << "!" << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << _name << " has died." << std::endl;
}


void HumanA::attack (void)
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}