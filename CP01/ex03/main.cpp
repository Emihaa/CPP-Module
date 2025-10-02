
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

// pointer can have a null so humanB should have a pointer to a weapon
// reference can't have null so there always has to have a weapon for humanA 
int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return (0);
}