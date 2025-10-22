#include "../inc/AForm.hpp"

AForm::AForm(std::string const name, const int gradeSign, const int gradeExec) 
    : _name(name),
      _sign(false),
      _gradeSign((gradeSign < 1) ? throw GradeTooHighException() : (gradeSign > 150) ? throw GradeTooLowException() : gradeSign),
      _gradeExec((gradeExec < 1) ? throw GradeTooHighException() : (gradeExec > 150) ? throw GradeTooLowException() : gradeExec)
{
}

AForm::~AForm() {}

std::string AForm::getName() const 
{
     return (_name);
}

bool AForm::getSigned() const
{
    return (_sign);
}

int AForm::getgradeSign() const 
{
    return (_gradeSign);
}

int AForm::getgradeExec() const 
{
    return (_gradeExec);
}

std::ostream &operator<<(std::ostream &out, const AForm &f)
{
    out << f.getName() << ", signed: " << f.getSigned() << ", grade to be signed: "<< f.getgradeSign() << ", grade to be execute: "<< f.getgradeExec() << ".";
    return out;
}

void AForm::beSigned(Bureaucrat b)
{
    if (b.getGrade() < _gradeSign)
    {
        _sign = 1;
        std::cout << b.getName() << " signed " << _name << std::endl;
    }
    else 
        throw GradeTooLowException();

}

void Aform::execute(Bureaucrat const & executor) const
{
    

}