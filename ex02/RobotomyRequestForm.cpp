#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 145, 137), _target(target)
{
    //std::cout << "RobotomyRequestForm constructor called." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    //std::cout << "RobotomyRequestForm destructor called." << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &other) : AForm(other), _target(other._target)
{
    //std::cout << "RobotomyRequestForm copy constructor called." << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    if (this != &other)
    {
        AForm::operator=(other);
    }
    return *this;
}

void RobotomyRequestForm::execute_action() const 
{
    int x = rand();
    if (x % 2 == 0)
        std::cout << "Ddzdzdzdzdzdzdzd " << _target << " has been robotomized." << std::endl;
    else
        std::cout << "Robotomy of " << _target << " failed." << std::endl;
}