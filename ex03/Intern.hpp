#ifndef Intern_HPP
# define Intern_HPP

# include <iostream>
# include <string> 
# include <exception>
# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class AForm;

class Intern 
{
public:
    Intern();
    ~Intern();
    Intern(const Intern & other);
    Intern &operator=(const Intern & other);
    AForm *makeForm(std::string nameForm, std::string targetForm);
};

#endif 