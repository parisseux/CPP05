#include "AForm.hpp"

AForm::AForm(std::string name, int gradeS, int gradeE) : _name(name), _gradeS(gradeS), _gradeE(gradeE)
{
    if (gradeS > 150 || gradeE > 150)
        throw GradeTooLowException();
    if (gradeS< 1 || gradeE < 1)
        throw GradeTooHighException();
    _is_signed = 0;
    //std::cout << "AForm constructor called." << std::endl;
}

AForm::~AForm() 
{
    //std::cout << "AForm destructor called." << std::endl;
}

AForm::AForm(const AForm & other) : _name(other._name),_is_signed(other._is_signed) ,_gradeS(other._gradeS), _gradeE(other._gradeE)
{
    //std::cout << "AForm copy constructor called." << std::endl;
}

AForm &AForm::operator=(const AForm & other)
{
    if (this != &other)
    {
        this->_is_signed = other._is_signed;       
    }
    //std::cout << "AForm assignment operator called." << std::endl;
    return (*this);
}

void AForm::beSigned(Bureaucrat &b)
{
    if (b.getGrade() > this->_gradeS)
        throw GradeTooLowException();
    _is_signed = 1;
}

std::string AForm::getName() const
{
    return (_name);
}

int AForm::getGradeS() const 
{
    return (_gradeS);
}

int AForm::getGradeE() const
{
    return (_gradeE);
}

bool AForm::getIsSigned() const
{
    return (_is_signed);
}

std::ostream &operator<<(std::ostream & o, AForm const & f)
{
    o << f.getName() << ", form." << std::endl;
    o << "Require grade to sign: " << f.getGradeS() << std::endl;
    o << "Require grade to execute: " << f.getGradeE() << std::endl;
    o << "Signed: " << f.getIsSigned();
    return (o);
}

void AForm::execute(Bureaucrat const & executor) const
{
    if (_is_signed == false)
        throw FormNotSigned();
    if (_gradeE < executor.getGrade())
        throw GradeTooLowException();
    execute_action();
}