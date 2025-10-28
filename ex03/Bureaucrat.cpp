#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade > 150)
        throw GradeTooLowException() ;
    if (grade < 1)
        throw GradeTooHighException() ;
    this->_grade = grade;
    //std::cout << "Bureaucrat constructor called." << std::endl;
}

Bureaucrat::~Bureaucrat() 
{
    //std::cout << "Bureaucrat destructor called." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat & other) : _name(other._name), _grade(other._grade)
{
    //std::cout << "Bureaucrat copy constructor called." << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat & other)
{
    if (this != &other)
        this->_grade = other._grade;
    //std::cout << "Bureaucrat assignment operator called." << std::endl;
    return (*this);
}
std::string Bureaucrat::getName() const
{
    return(_name);
}

int Bureaucrat::getGrade() const
{
    return(_grade);
}

void Bureaucrat::incrementGrade()
{
    if (_grade <= 1)
        throw GradeTooHighException();
    _grade--;
}
void Bureaucrat::decrementGrade()
{
    if (_grade >= 150)
        throw GradeTooLowException();
    _grade++;
}

std::ostream&  operator<<(std::ostream &o, Bureaucrat const & other)
{
    o << other.getName() << ", bureaucrat grade " << other.getGrade() << ".";
    return (o);
}

void Bureaucrat::signForm(AForm &f)
{
    try
    {
        f.beSigned(*this);
        std::cout << _name << " signed " << f.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << _name << " couldn't sign " << f.getName()
                  << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const & f) const
{
    try
    {
        f.execute(*this);
        std::cout << _name << " executed " << f.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << _name << " couldn't execute " << f.getName() << " because " << e.what() << std::endl;
    }
}