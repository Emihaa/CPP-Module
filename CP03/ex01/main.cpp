#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main (void)
{
	ClapTrap Pekka("Pekka");
	std::cout << std::endl;
	//TODO: maybe check why it doesnt only call the operator= cosntructor?? Luka knows
	ClapTrap Timo = Pekka;
	std::cout << std::endl;
	ClapTrap Jukka(Pekka);
	std::cout << std::endl;
	
	ScavTrap Maija("Maija");
	std::cout << std::endl;
	ScavTrap Milla = Maija;	
	std::cout << std::endl;
	ScavTrap Eeva(Maija);
	std::cout << std::endl;
	
	for (int i = 0; i < 11; i++)
		Pekka.attack("enemy");
	std::cout << std::endl;
	for (int i = 0; i < 11; i++)
		Jukka.takeDamage(1);
	std::cout << std::endl;	
	for (int i = 0; i < 11; i++)
		Timo.beRepaired(5);
	std::cout << std::endl;
	
	for (int i = 0; i < 11; i++)
		Maija.attack("enemy");
	std::cout << std::endl;
	for (int i = 0; i < 11; i++)
		Milla.beRepaired(5);
	std::cout << std::endl;
	for (int i = 0; i < 11; i++)
		Eeva.takeDamage(10);
	std::cout << std::endl;
	Maija.guardGate();
	std::cout << std::endl;	
	
	return (0);
}