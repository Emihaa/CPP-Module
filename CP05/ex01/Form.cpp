#include "Form.hpp"


Form::Form() : _name(""), _grade_sign(50), _grade_exe(50), _signed(false)
{
    std::cout << "Default Form constuctor called" << std::endl;
}

Form::Form(const std::string name,const int grade_sign, const int grade_exe) : _name(name), _grade_sign(grade_sign), _grade_exe(grade_exe)
{
    if (_grade_sign < 1 || _grade_exe < 1)
        throw GradeTooHighException();
    else if (_grade_sign > 150 || _grade_exe > 150)
        throw GradeTooLowException();
    std::cout << "Form constructor called" << std::endl;
}

Form::Form(const Form& og) : _name(og._name), _grade_sign(og._grade_sign), _grade_exe(og._grade_exe)
{
    _signed = og._signed;
    std::cout << "Copy Form constructor called" << std::endl;
}

Form &Form::operator=(const Form& og)
{
    if (this != &og)
        _signed = og._signed;
    std::cout << "Copy operator constructor called" << std::endl; 
    return (*this);
}

Form::~Form()
{
    std::cout << "Destruction constructor called" << std::endl;
}

std::string Form::getName() const
{
    return (_name);
}

int Form::getGradeSign() const
{
    return (_grade_sign);
}

int Form::getGradeExe() const
{
    return (_grade_exe);
}

bool Form::getSigned() const
{
    return (_signed);
}

void Form::beSigned(const Bureaucrat &og)
{
    if (og._grade <= _grade_sign)
        _signed = true;
    else
        throw GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const noexcept
{
    return ("Grade is too high.");
}

const char* Form::GradeTooLowException::what() const noexcept
{
    return ("Grade is too low.");
}

std::ostream& Form::operator<<(std::ostream &out, const Form &c)
{
    out << "The Form " << c.getName() << " something" << std::endl;
}