#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <stdexcept>
# include <iostream>

class Bureaucrat 
{
private:
    const std::string _name;
    int _grade;
public:
    Bureaucrat(std::string name, int grade);
    ~Bureaucrat();
    std::string getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();
    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw() { return "Grade too high!"; }
    };
    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw() { return "Grade too low!"; }
    };
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b);

#endif