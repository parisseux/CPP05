#include "Form.hpp"

Form::Form(std::string name, int gradeS, int gradeE) : _name(name), _gradeS(gradeS), _gradeE(gradeE)
{
    if (gradeS > 150 || gradeE > 150)
        throw GradeTooLowException();
    if (gradeS< 1 || gradeE < 1)
        throw GradeTooHighException();
    _is_signed = 0;
    //std::cout << "Form constructor called." << std::endl;
}

Form::~Form() 
{
    //std::cout << "Form destructor called." << std::endl;
}

Form::Form(const Form & other) : _name(other._name),_is_signed(other._is_signed) ,_gradeS(other._gradeS), _gradeE(other._gradeE)
{
    //std::cout << "Form copy constructor called." << std::endl;
}

Form &Form::operator=(const Form & other)
{
    if (this != &other)
    {
        this->_is_signed = other._is_signed;       
    }
    //std::cout << "Form assignment operator called." << std::endl;
    return (*this);
}

void Form::beSigned(Bureaucrat &b)
{
    if (b.getGrade() > this->_gradeS)
        throw GradeTooLowException();
    _is_signed = 1;
}

std::string Form::getName() const
{
    return (_name);
}

int Form::getGradeS() const 
{
    return (_gradeS);
}

int Form::getGradeE() const
{
    return (_gradeE);
}

bool Form::getIsSigned() const
{
    return (_is_signed);
}

std::ostream &operator<<(std::ostream & o, Form const & f)
{
    o << f.getName() << ", form." << std::endl;
    o << "Require grade to sign: " << f.getGradeS() << std::endl;
    o << "Require grade to execute: " << f.getGradeE() << std::endl;
    o << "Signed: " << f.getIsSigned();
    return (o);
}