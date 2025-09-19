#include "Harl.hpp"
#include <cstddef>

Harl::Harl(void)
{
	std::cout << "Harl has been born." << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "Harl has been destroyed." << std::endl;
}

void Harl::complain(std::string level)
{
	enum func {DEBUG, INFO, WARNING, ERROR};
	std::string a[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int val = -1;
	
	for (int i = 0; i < 4; i++)
		if (level == a[i])
			val = i;
	
	if (val == -1)
	{
		std::cout << "No such '" << level << "' argument found." << std::endl;
		std::cout << "Give one of the arguments: 'DEBUG', 'INFO', 'WARNING' or 'ERROR'" << std::endl;
		return ;
	}
	
	void (Harl::* pntr )(void) = nullptr;
	switch (val)
	{
		case DEBUG:
			pntr = &Harl::debug;
			break;
		case INFO:
			pntr = &Harl::info;
			break;
		case WARNING:
			pntr = &Harl::warning;
			break;	
		case ERROR:
			pntr = &Harl::error;
			break;
	}
	(this->*pntr)();
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}