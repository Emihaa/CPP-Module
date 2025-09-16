#include "Zombie.hpp"
#include <cstddef>

Zombie* zombieHorde(int N, std::string name)
{
	if (N < 1)
		std::cout << "Zombie horde cannot be less than 1" << std::endl;
	Zombie *z = new Zombie[N];
	if (z == NULL)
		std::cout << "Zombie horde allocation failed. :(" << std::endl;

	for (int i = 0; i < N; i++)
		z[i].zombieNaming(name);
	return (z);
}
