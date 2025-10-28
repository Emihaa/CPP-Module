#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(""), _grade(150)
{
	std::cout << "Bureaucrat default constructor has been called." << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{	
	if (_grade > 150)
		throw GradeTooHighException();
	if (_grade < 1)
		throw GradeTooLowException();
	_grade = grade;
	std::cout << "Bureaucrat constructor has been called." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& og)
{
	_grade = og._grade;
	std::cout << "Bureaucrat copy constructor has been called." << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& og)
{
	std::cout << "Bureaucrat copy assignment has been called." << std::endl;
	if (this != &og)
		_grade = og._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destruction constructor has been called." << std::endl;
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
	if (_grade > 150)
		throw GradeTooHighException();
	if (_grade <= 1)
		throw GradeTooLowException();
	_grade -= 1;
}
 
void Bureaucrat::incrementGrade()
{
	if (_grade >= 150)
		throw GradeTooHighException();
	if (_grade < 1)
		throw GradeTooLowException();
	_grade += 1;
}

const char* Bureaucrat::GradeTooHighException::what() const noexcept
{
	return ("Grade is too high.");
}

const char* Bureaucrat::GradeTooLowException::what() const noexpect
{
	return ("Grade is too low.");
}

std::ostream& operator<<(std::ostream &out, Bureaucrat const &c)
{
	out << "The Bureaucrat named " << c.getName() << " grade is " << c.getGrade() << std::endl;
	return (out);
}
