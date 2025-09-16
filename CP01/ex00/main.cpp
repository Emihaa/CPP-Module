#include "Zombie.hpp"

int main (void)
{
	Zombie zombie1("Emilia");

	Zombie *zombie2 = newZombie("Vegenakki");

	randomChump("Nakkinen");
	
	delete zombie2;
	return (0);
}
