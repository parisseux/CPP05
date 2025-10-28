#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 145, 137), _target(target)
{
    //std::cout << "PresidentialPardonForn constructor called." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    //std::cout << "PresidentialPardonForn destructor called." << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &other) : AForm(other), _target(other._target)
{
    //std::cout << "PresidentialPardonForn copy constructor called." << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    if (this != &other)
    {
        AForm::operator=(other);
    }
    return *this;

}

void PresidentialPardonForm::execute_action() const
{
    std::cout << _target << "has been pardoned by Zaphod Beeblebrox." << std::endl;
}