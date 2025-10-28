
#include "Bureaucrat.hpp"

int main(void)
{
    try 
    {
        Bureaucrat *a = new Bureaucrat("Matti", 1);
        Bureaucrat b("Pekka", 150);
        Bureaucrat c("Jukka", -5);
        Bureaucrat *d = new Bureaucrat("Olli", 200);

        a->decrementGrade();
        std::cout << a << std::endl;
        b.incrementGrade();
        std::cout << b << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);

    delete a;
    delete d;

}