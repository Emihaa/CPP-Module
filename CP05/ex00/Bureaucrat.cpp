#include "Bureaucrat.hpp"
#include <stdexcept>

Bureaucrat::Bureaucrat() : _name("")
{
	std::cout << "Bureaucrat default constructor has been called." << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{	
	std::cout << "Bureaucrat constructor has been called." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& og)
{
	std::cout << "Bureaucrat copy constructor has been called." << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& og)
{
	std::cout << "Bureaucrat copy assignment has been called." << std::endl;
	return (*this);
}

int Bureaucrat::getGrade(void) const
{
	std::cout << "GetGrade function called" << std::endl;
	return (_grade);
}

std::string Bureaucrat::getName(void) const
{
	std::cout << "GetName function called." << std::endl;
	return (_name);
}

void Bureaucrat::decrementGrade()
{
	_grade -= 1;
}
 
void Bureaucrat::incrementGrade()
{
	try {
		_grade += 1;
		if (_grade > 150)
			throw _grade;
		if (_grade < 1)
			throw _grade; //either GradeTooLow or HighException
	}
	catch (const std::out_of_range& error) 
	{
		std::cout << error.what() << std::endl;
	}
}
