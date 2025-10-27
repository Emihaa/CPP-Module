#pragma once

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat : public std::exception
{
	private:
	const std::string _name;
	int _grade;
	
	public:
	Bureaucrat();
	Bureaucrat(const Bureaucrat& og);
	Bureaucrat &operator=(const Bureaucrat& og);
	~Bureaucrat();
	
	Bureaucrat(const std::string name, int grade);
	
	void decrementGrade();
	void incrementGrade();
	
	std::string getName() const;
	int getGrade() const;
	
	Bureaucrat(int grade) : GradeTooHighException(grade);
	
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &c);

//overload << insertion function 
// 
// 
// So we create an expection if the grade isnt a value between 1-10
// either a: Bureaucrat::GradeTooHighException
// or
// Bureaucrat::GradeTooLowException