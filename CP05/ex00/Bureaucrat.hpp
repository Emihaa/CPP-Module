#pragma once

#include <iostream>
#include <string>

class Bureaucrat
{
	private:
	const std::string _name;
	int _grade;
	
	public:
	Bureaucrat();
	Bureaucrat(const Bureaucrat& og);
	Bureaucrat &operator=(const Bureaucrat& og);
	~Bureaucrat();
	
	Bureaucrat(const std::string name, int rank);
	
	void decrementGrade();
	void incrementGrade();
	
	void getName() const;
	void getGrade() const;
	
	std::string setName();
	int setGrade();
};

//overload << insertion function 