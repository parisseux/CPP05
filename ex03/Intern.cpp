#include "Intern.hpp"

Intern::Intern()
{
    //std::cout << "Intern constructor called." << std::endl;
}

Intern::~Intern() 
{
    //std::cout << "Intern destructor called." << std::endl;
}

Intern::Intern(const Intern & other)
{
    (void)other;
    //std::cout << "Intern copy constructor called." << std::endl;
}

Intern &Intern::operator=(const Intern & other)
{
    (void)other;
    //std::cout << "Intern assignment operator called." << std::endl;
    return (*this);
}

AForm *Intern::makeForm(std::string nameForm, std::string targetForm)
{
    std::string forms[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    int i = 0;
    while (i < 3 && nameForm != forms[i])
        i++;
    switch (i)
    {
    case 0:
		std::cout << "Intern creates " << nameForm << std::endl;
		return (new ShrubberyCreationForm(targetForm));
	case 1:
		std::cout << "Intern creates " << nameForm << std::endl;
		return (new RobotomyRequestForm(targetForm));
	case 2:
		std::cout << "Intern creates " << nameForm << std::endl;
		return (new PresidentialPardonForm (targetForm));
	default:
		std::cout << "Form is not existing" << std::endl;
		return nullptr;
    }

}