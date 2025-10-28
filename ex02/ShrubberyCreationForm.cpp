#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
    //std::cout << "ShrubberyCreationForm constructor called." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    //std::cout << "ShrubberyCreationForm destructor called." << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &other) : AForm(other), _target(other._target)
{
    //std::cout << "ShrubberyCreationForm copy constructor called." << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if (this != &other)
    {
        AForm::operator=(other);
    }
    return *this;

}

void ShrubberyCreationForm::execute_action() const
{
    std::ofstream outFile(_target + "_shrubbery");
    if (!outFile.is_open())
    {
        std::cerr << "Error: cannot open file " << _target << "_shrubbery" << std::endl;
        return;
    }
    outFile <<
"       _-_\n"
"    /~~   ~~\\\n"
" /~~         ~~\\\n"
"{               }\n"
" \\  _-     -_  /\n"
"   ~  \\\\ //  ~\n"
"_- -   | | _- _\n"
"  _ -  | |   -_\n"
"      // \\\\\n";
    outFile.close();
}