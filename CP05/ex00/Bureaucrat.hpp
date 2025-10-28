#pragma once

#include <iostream>
#include <string>
#include <exception>

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
	
	Bureaucrat(const std::string name, int grade);
	
	void decrementGrade();
	void incrementGrade();
	
	std::string getName() const;
	int 		getGrade() const;
	
	class GradeTooHighException : public std::exception
	{
		public:
			const char* what() const noexcept override;
	};
	
	class GradeTooLowException : public std::exception
	{
		public:
			const char* what() const noexcept override;
	};
	
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &c);
