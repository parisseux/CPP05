#include "Bureaucrat.hpp"

int main ()
{
    //test 1
    std::cout << "---- TEST 1 -----" << std::endl;
    try {
        Bureaucrat B1("Rime", 2);
        std::cout << B1 << std::endl;
        B1.incrementGrade();
        std::cout << B1 << std::endl;
        B1.incrementGrade();
        std::cout << B1 << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;

    }
    //test 2
    std::cout << "---- TEST 2 -----" << std::endl;
    try {
        Bureaucrat B2("Laeti", 149);
        std::cout << B2 << std::endl;
        B2.decrementGrade();
        std::cout << B2 << std::endl;
        B2.decrementGrade();
        std::cout << B2 << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;

    }
    //test 3
    std::cout << "---- TEST 3 -----" << std::endl;
    try {
        Bureaucrat B3("Dav", 164);
        std::cout << B3 << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;

    }
        //test 3
    std::cout << "---- TEST 4 -----" << std::endl;
    try {
        Bureaucrat B4("Cam", -2);
        std::cout << B4 << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;

    }

}
