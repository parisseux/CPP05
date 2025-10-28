#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
    //test 1
    std::cout << "---- TEST 1 -----" << std::endl;
    try {
        Form F1("inscription", 123, 12);
        std::cout << F1 << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;

    }
    //test 2
    std::cout << "---- TEST 2 -----" << std::endl;
    try {
        Bureaucrat B2("Laeti", 22);
        std::cout << B2 << std::endl;
        Form F2("salaire", 23, 24);
        std::cout << F2 << std::endl;
        F2.beSigned(B2);
        std::cout << F2 << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;

    }
    //test 3
    std::cout << "---- TEST 3 -----" << std::endl;
    try {
        Form F3("Comptabilité", 164, 12);
        std::cout << F3 << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;

    }
    //test 4
    std::cout << "---- TEST 4 -----" << std::endl;
    try {
        Bureaucrat B4("Cam", 123);
        std::cout << B4 << std::endl;
        Form F4 ("ammendes", 12, 13);
        std::cout << F4 << std::endl;
        F4.beSigned(B4);
        std::cout << F4 << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;

    }
     //test 5
    std::cout << "---- TEST 5 -----" << std::endl;
    try {
        Bureaucrat B5("Chae", 2);
        std::cout << B5 << std::endl;
        Form F5 ("permis", 12, 13);
        std::cout << F5 << std::endl;
        B5.signForm(F5);
        std::cout << F5 << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;

    }
    //test 5
    std::cout << "---- TEST 6 -----" << std::endl;
    try {
        Bureaucrat B6("Ana", 43);
        std::cout << B6 << std::endl;
        Form F6 ("adoption paper", 12, 13);
        std::cout << F6 << std::endl;
        B6.signForm(F6);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;

    }

}
