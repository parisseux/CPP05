#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main ()
{
    //test 1
    std::cout << "--- TEST 1 ----" << std::endl;
    try {
        Bureaucrat B1("Dav", 3);
        std::cout << B1 << std::endl;
        std::cout << std::endl;
        PresidentialPardonForm F1("Washington");
        std::cout << F1 << std::endl;
        std::cout << std::endl;
        RobotomyRequestForm F2("EVE");
        std::cout << F2 << std::endl;
        std::cout << std::endl;
        ShrubberyCreationForm F3("desktop");
        std::cout << F3 << std::endl;
        std::cout << std::endl;
        B1.signForm(F1);
        std::cout << std::endl;
        B1.signForm(F2);
        std::cout << std::endl;
        B1.signForm(F3);
        std::cout << std::endl;
        B1.executeForm(F1);
        std::cout << std::endl;
        B1.executeForm(F2);
        B1.executeForm(F2);
        B1.executeForm(F2);
        B1.executeForm(F2);
        std::cout << std::endl;
        B1.executeForm(F3);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
        
    }
    //test 2 -- pas signé
    std::cout << std::endl;
    std::cout << "--- TEST 2 ----" << std::endl;
    try {
        Bureaucrat B1("Ana", 34);
        std::cout << B1 << std::endl;
        std::cout << std::endl;
        PresidentialPardonForm F1("Washington");
        std::cout << F1 << std::endl;
        std::cout << std::endl;
        B1.executeForm(F1);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    //test 3 -- grade too low
    std::cout << std::endl;
    std::cout << "--- TEST 2 ----" << std::endl;
    try {
        Bureaucrat B1("Chae", 149);
        std::cout << B1 << std::endl;
        std::cout << std::endl;
        ShrubberyCreationForm F3("desktop");
        std::cout << F3 << std::endl;
        std::cout << std::endl;
        B1.signForm(F3);
        B1.executeForm(F3);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

}
