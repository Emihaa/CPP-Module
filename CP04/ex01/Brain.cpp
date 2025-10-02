#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor has been called." << std::endl;	
}

Brain::Brain(const Brain& copy)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = copy._ideas[i];
	std::cout << "Brain copy constructor has been called." << std::endl;
}

Brain &Brain::operator=(const Brain& copy)
{
	if (this != &copy)
	{	
		for (int i = 0; i < 100; i++)
			_ideas[i] = copy._ideas[i];
	}
	std::cout << "Brain copy assignment has been called." << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor has been called." << std::endl;		
}

