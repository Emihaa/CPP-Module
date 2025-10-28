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

void Bureaucrat::signForm(const Form &c) const
{
	try
	{
		c.signForm(this);
	}
	catch(const std::exception& e)
	{
		std::cerr << _name << "coudn't sign " << c._name << " because" << e.what() << std::endl;
	}
	std::cout << _name << " signed " << c._name << std::endl;
}

void Bureaucrat::decrementGrade()
{
	if (_grade > 150)
		throw GradeTooLowException();
	if (_grade <= 1)
		throw GradeTooHighException();
	_grade -= 1;
}
 
void Bureaucrat::incrementGrade()
{
	if (_grade >= 150)
		throw GradeTooLowException();
	if (_grade < 1)
		throw GradeTooHighException();
	_grade += 1;
}

const char* Bureaucrat::GradeTooHighException::what() const noexcept
{
	return ("Grade is too high.");
}

const char* Bureaucrat::GradeTooLowException::what() const noexcept
{
	return ("Grade is too low.");
}

std::ostream& operator<<(std::ostream &out, Bureaucrat const &c)
{
	out << "The Bureaucrat named " << c.getName() << " grade is " << c.getGrade() << std::endl;
	return (out);
}
