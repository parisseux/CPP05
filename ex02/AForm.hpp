#ifndef AForm_HPP
# define AForm_HPP

# include <iostream>
# include <string> 
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;  

class AForm 
{
private:
    std::string const _name;
    bool _is_signed;
    int const _gradeS;
    int const _gradeE;
public:
    AForm(std:: string, int gradeS, int gradeE);
    ~AForm();
    AForm(const AForm & other);
    AForm &operator=(const AForm & other);
    void beSigned(Bureaucrat &b);
    std::string getName() const;
    int getGradeS() const;
    int getGradeE() const;
    bool getIsSigned() const;
    void execute(Bureaucrat const & executor) const;
    virtual void execute_action() const = 0;
    class GradeTooHighException : public std::exception
    {
        const char* what() const throw() { return "Grade too high!";}
    };
    class GradeTooLowException : public std::exception
    {
        const char* what() const throw() { return "Grade too low!";}
    };
    class FormNotSigned : public std::exception
    {
        const char* what() const throw() { return "Form not signed!";}
    };
};

std::ostream &operator<<(std::ostream &o, AForm  const & f);

#endif 