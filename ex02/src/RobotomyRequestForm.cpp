#include "../inc/RobotomyRequestForm.hpp"

    
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm",72, 45), _target(target)
{
}
RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::ExecuteAction() const 
{
    int random_number;

    random_number = rand();

    if (random_number % 2 == 0)
        std::cout << "BZBZBZBZBZBZBZBZZZZZZZZZ..." << _target << "has been robotomized." << std::endl;
    else 
        std::cout << "Robotomy has failed." << std::endl;


}