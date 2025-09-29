#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""), _hit_points(10), _energy_points(10), _attack_dmg(0) 
{
	std::cout << "ClapTrap default constuctor called for " << _name << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_attack_dmg = 0;
	_energy_points = 10;
	_hit_points = 10;
	std::cout << "Initializing ClapTrap " << _name << "!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	_name = copy._name;
	_attack_dmg = copy._attack_dmg;
	_energy_points = copy._energy_points;
	_hit_points = copy._hit_points;
	std::cout << "ClapTrap copy constructor called for " << _name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& copy)
{
	_name = copy._name;
	_attack_dmg = copy._attack_dmg;
	_energy_points = copy._energy_points;
	_hit_points = copy._hit_points;
	std::cout << "ClapTrap " << _name << " copied! " << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " has been destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_energy_points > 0 && _hit_points > 0)
	{
		_energy_points--;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_dmg << " points of damage!" << std::endl;	
	}
	else
	{
		std::cout << "ClapTrap " << _name << " can't attack as it has no more points!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_points > 0)
	{
		_hit_points -= (amount > _hit_points ? _hit_points : amount);
		std::cout << "ClapTrap " << _name << " took " << amount << " of dmg!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " cannot take dmg, as it has no more hit points!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy_points > 0 && _hit_points > 0) 
	{
		_energy_points--;
		_hit_points += amount;
		std::cout << "ClapTrap " << _name << " repaired itself by " << amount << "!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " cannot repair as it has no more points!" << std::endl;
	}
}