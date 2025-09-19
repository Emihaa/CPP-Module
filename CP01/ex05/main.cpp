
#include "Harl.hpp"

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		Harl harl;
		harl.complain(argv[1]);
	}
	else
	{
		std::cout << "Give one of the arguments: 'DEBUG', 'INFO', 'WARNING' or 'ERROR'" << std::endl;
	}
	return (0);
}