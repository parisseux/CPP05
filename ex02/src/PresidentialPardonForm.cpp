#include "../inc/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 2, 5)
{}
PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::ExecuteAction() const 
{
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}