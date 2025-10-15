#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <stdexcept> 
# include "../inc/Bureaucrat.hpp"

class Form 
{
private:
    const std::string _name;
    bool _sign;
    const int _gradeSign;
    const int _gradeExec;
public:
    Form(std::string name, const int gradeSign, const int gradeExec);
    ~Form();
    std::string getName() const;
    int getgradeSign() const ;
    int getgradeExec() const ;
    bool getSigned() const;
    void beSigned(Bureaucrat b);
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
std::ostream &operator<<(std::ostream &out, const Form &f);
#endif 