#pragma once

#include <iostream>

class Brain 
{
	protected:
	std::string _ideas[100];
	
	public:
	Brain();
	Brain(const Brain& copy);
	Brain &operator=(const Brain& copy);
	~Brain();
	
};