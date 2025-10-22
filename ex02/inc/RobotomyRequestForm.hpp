#ifndef ROBOTOMYREEQUESTFORM_HPP
# define ROBOTOMYREEQUESTFORM_HPP

# include "AForm.hpp" 

class RobotomyRequestForm : AForm
{
private:
    const std::string _target;
public:
    RobotomyRequestForm(std::string name);
    ~RobotomyRequestForm();
    void ExecuteAction() const ;
};
#endif