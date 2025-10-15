#include "../inc/Form.hpp"
#include "../inc/Bureaucrat.hpp"

Form::Form(std::string const name, const int gradeSign, const int gradeExec) 
    : _name(name),
      _sign(false),
      _gradeSign((gradeSign < 1) ? throw GradeTooHighException() : (gradeSign > 150) ? throw GradeTooLowException() : gradeSign),
      _gradeExec((gradeExec < 1) ? throw GradeTooHighException() : (gradeExec > 150) ? throw GradeTooLowException() : gradeExec)
{
}

Form::~Form() {}

std::string Form::getName() const 
{
     return (_name);
}

bool Form::getSigned() const
{
    return (_sign);
}

int Form::getgradeSign() const 
{
     return (_gradeSign);
}

int Form::getgradeExec() const 
{
     return (_gradeExec);
}

std::ostream &operator<<(std::ostream &out, const Form &f)
{
    out << f.getName() << ", signed: " << f.getSigned() << ", grade to be signed: "<< f.getgradeSign() << ", grade to be execute: "<< f.getgradeExec() << ".";
    return out;
}

void Form::beSigned(Bureaucrat b)
{
    if (b.getGrade() < _gradeSign)
    {
        _sign = 1;
        std::cout << b.getName() << " signed " << _name << std::endl;
    }
    else 
        throw GradeTooLowException();

}