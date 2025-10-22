#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp" 

class PresidentialPardonForm : AForm
{
private:
    const std::string _target;
public:
    PresidentialPardonForm(std::string target);
    ~PresidentialPardonForm();
    void ExecuteAction() const ;
};
#endif