#pragma once

#include <string>
#include <iostream>

class Bureaucrat;

class Form
{
    private:
    const std::string   _name;
    const int           _grade_sign;
    const int           _grade_exe;
    bool                _signed = false;

    public:
    Form();
    From(const Form& og);
    Form &operator=(const Form& og);
    ~Form();

    Form(std::string name, int grade_sign, int grade_exe);

    std::string getName() const;
    int         getGradeSign() const;
    int         getGradeExe() const;
    bool        getSigned() const;

    void beSigned(const Bureaucrat &og);

    class GradeTooHighException : public std::execption
    {
        public:
            const char* what() const noexcept override;
    };

    class GradeTooLowException : public std::execption
    {
        public:
            const char* what() const noexcept override;
    };

};

std::ostream& operator<<(std::ostream &out, const Form &c);