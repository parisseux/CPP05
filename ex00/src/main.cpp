#include "../inc/Bureaucrat.hpp"

int main()
{
    // Valide
    try
    {
        Bureaucrat b("bob", 2);
        std::cout << b << std::endl;
        b.decrementGrade();
        std::cout << b << std::endl;
        b.incrementGrade();
        std::cout << b << std::endl;
        b.incrementGrade();
        std::cout << b << std::endl;
        //invalide -- GRADE TOO HIGH
        b.incrementGrade();
        std::cout << b << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    // Invalide - GRADE TOO LOW
    try
    {
        Bureaucrat c("carl", 156);
    }
    catch (const std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }   
    //invalide - GRADE TOO HIH
    try
    {
        Bureaucrat f("francois", 0);
    }
    catch (const std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    } 
    return 0;
}
