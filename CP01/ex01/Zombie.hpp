#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie
{
	private:
	std::string _name;
	
	public:
	Zombie(void);
	~Zombie(void);
	
	void announce ( void );
	void zombieNaming ( std::string name );
};

Zombie* zombieHorde ( int N, std::string name );

#endif