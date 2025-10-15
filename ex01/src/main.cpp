#include "../inc/Form.hpp"

int main()
{
    try
    {
        //valide
        Bureaucrat bob("Bob", 50);
        std::cout << bob << std::endl;

        // valide
        Form formA("FormA", 45, 30);
        std::cout << formA << std::endl;

        // invalide
        std::cout << "Trying to sign FormA with Bob..." << std::endl;
        formA.beSigned(bob);
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try
    {
        // valide
        Bureaucrat alice("Alice", 1);
        Form formB("FormB", 2, 10);

        std::cout << alice << std::endl;
        std::cout << formB << std::endl;

        // valide
        formB.beSigned(alice);
        std::cout << formB << std::endl; // vérifier que _sign est passé à 1 (true)
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try
    {
        Form invalidForm("Invalid", 2, 153);
        std::cout << invalidForm << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
