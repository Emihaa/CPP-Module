
#include "Zombie.hpp"

int main (void)
{
	Zombie *horde = zombieHorde(8, "Pekka");
	
	delete []horde;
	
	return (0);
}