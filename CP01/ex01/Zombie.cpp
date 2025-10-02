#include "Zombie.hpp"

Zombie::Zombie (void) { }

void Zombie::zombieNaming (std::string name)
{
	this->_name = name;
	this->announce();
}

void Zombie::announce() {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl; 
}

Zombie::~Zombie (void)
{
	std::cout << "Zombie " << this->_name << " destroyed!" << std::endl;
}