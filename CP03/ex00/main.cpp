#include "ClapTrap.hpp"


int main (void)
{
	ClapTrap Pekka("Pekka");
	ClapTrap Jukka(Pekka);
	ClapTrap Timo = Pekka;

	for (int i = 0; i < 11; i++)
		Pekka.attack("enemy");
	
	for (int i = 0; i < 11; i++)
		Jukka.takeDamage(1);
	
	for (int i = 0; i < 11; i++)
		Timo.beRepaired(5);
	
	return (0);
}