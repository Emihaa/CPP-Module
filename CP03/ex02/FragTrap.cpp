#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	_hit_points = 100;
	_attack_dmg = 30;
	_energy_points = 100;
	std::cout << "Default FragTrap constructor called!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy)
{
	*this = copy;
	std::cout << "FragTrap Copy constructor called!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap& copy)
{
	_name = copy._name;
	_attack_dmg = copy._attack_dmg;
	_energy_points = copy._energy_points;
	_hit_points = copy._hit_points;
	std::cout << "FragTrap copy operator constructor called!" << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " destruction called!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hit_points = 100;
	_attack_dmg = 30;
	_energy_points = 100;
	std::cout << "Initializing FragTrap " << _name << "!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " wants some highfives!" << std::endl;
}