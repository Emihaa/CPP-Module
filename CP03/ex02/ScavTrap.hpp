#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
	ScavTrap();
	ScavTrap(const ScavTrap& copy);
	ScavTrap &operator=(const ScavTrap& copy);
	~ScavTrap();
	
	ScavTrap(std::string name);
	
	void attack(std::string target);
	void guardGate();
};