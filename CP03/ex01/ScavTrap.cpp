#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default constructor ScavTrap " << _name << " is born!" << std::endl;
	_attack_dmg = 20;
	_energy_points = 50;
	_hit_points = 100;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	_name = copy._name;
	_attack_dmg = copy._attack_dmg;
	_energy_points = copy._energy_points;
	_hit_points = copy._hit_points;
	std::cout << "ScavTrap copy constructor called for " << _name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& copy)
{
	_name = copy._name;
	_attack_dmg = copy._attack_dmg;
	_energy_points = copy._energy_points;
	_hit_points = copy._hit_points;
	std::cout << "ScavTrap " << _name << " copied! " << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " was destroyed!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_attack_dmg = 20;
	_energy_points = 50;
	_hit_points = 100;
	std::cout << "Initializing ScavTrap " << _name << "!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (_energy_points > 0 && _hit_points > 0)
	{
		_energy_points--;
		std::cout << "ScavTrap " << _name << " is attacking " << target << " by " << _attack_dmg << " dmg points!" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << _name << " can't attack as it has no more points!" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!" << std::endl;
}