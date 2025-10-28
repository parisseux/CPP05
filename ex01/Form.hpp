#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string> 
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;  

class Form 
{
private:
    std::string const _name;
    bool _is_signed;
    int const _gradeS;
    int const _gradeE;
public:
    Form(std:: string, int gradeS, int gradeE);
    ~Form();
    Form(const Form & other);
    Form &operator=(const Form & other);
    void beSigned(Bureaucrat &b);
    std::string getName() const;
    int getGradeS() const;
    int getGradeE() const;
    bool getIsSigned() const;
    class GradeTooHighException : public std::exception
    {
        const char* what() const throw() { return "Grade too high!";}
    };
    class GradeTooLowException : public std::exception
    {
        const char* what() const throw() { return "Grade too low!";}
    };
};

std::ostream &operator<<(std::ostream &o, Form  const & f);

#endif 