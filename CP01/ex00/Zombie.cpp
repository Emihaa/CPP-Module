#include "Zombie.hpp"

Zombie::Zombie (std::string name)
{
	this->_name = name;
	announce();
}

void Zombie::announce() {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl; 
}

Zombie::~Zombie (void)
{
	std::cout << "Zombie " << this->_name << " destroyed!" << std::endl;
}