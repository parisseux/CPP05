#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <stdexcept> 
# include "../inc/Bureaucrat.hpp"

class AForm 
{
private:
    const std::string _name;
    bool _sign;
    const int _gradeSign;
    const int _gradeExec;
public:
    AForm(std::string name, const int gradeSign, const int gradeExec);
    ~AForm();
    std::string getName() const;
    int getgradeSign() const ;
    int getgradeExec() const ;
    bool getSigned() const;
    void beSigned(Bureaucrat b);
    virtual void execute(Bureaucrat const & executor) const = 0; 
    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw() 
        { 
            return "Grade too high!";
        }
    };
    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw()
        {
            return "Grade too low!";
        }
    };

};
std::ostream &operator<<(std::ostream &out, const AForm &f);
#endif 