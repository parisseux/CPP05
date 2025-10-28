#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main ()
{
    //test 1
    std::cout << "--- TEST 1 ----" << std::endl;
    try {
        Bureaucrat B1("Chef", 2);
        Intern I;
        AForm* F1;
        F1 = I.makeForm("PresidentialPardonForm", "secret");
        if (F1)
        {
            B1.signForm(*F1);
            F1->execute(B1);
            delete F1;
        }
        else    
            std::cout << "Cannot execute form: it does not exist." << std::endl;

    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "--- TEST 2 ----" << std::endl;
    try {
        Bureaucrat B1("Chef", 2);
        Intern I;
        AForm* F2;
        F2 = I.makeForm("RobotomyRequestForm", "EVE");
        if (F2)
        {
            B1.signForm(*F2);
            F2->execute(B1);
            delete F2;
        }
        else    
            std::cout << "Cannot execute form: it does not exist." << std::endl;

    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "--- TEST 3 ----" << std::endl;
    try {
        Bureaucrat B1("Chef", 2);
        Intern I;
        AForm* F3;
        F3 = I.makeForm("ShrubberyCreationForm", "lala");
        if (F3)
        {
            B1.signForm(*F3);
            F3->execute(B1);
            delete F3;
        }
        else    
            std::cout << "Cannot execute form: it does not exist." << std::endl;

    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
     std::cout << "--- TEST 4 ----" << std::endl;
    try {
        Bureaucrat B1("Chef", 2);
        Intern I;
        AForm* F4;
        F4 = I.makeForm("nonexistentfile", "boom");
        if (F4)
        {
            B1.signForm(*F4);
            F4->execute(B1);
            delete F4;
        }
        else    
            std::cout << "Cannot execute form: it does not exist." << std::endl;

    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

}