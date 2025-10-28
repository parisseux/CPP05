#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat {
private:
    const std::string _name;
    int _grade;
public:
    Bureaucrat(std::string name, int grade);
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat & other);
    Bureaucrat &operator=(const Bureaucrat & other);
    std::string getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();
    class GradeTooHighException : public std::exception
    {
        const char* what() const throw() { return "Grade too high!";}
    };
    class GradeTooLowException : public std::exception
    {
        const char* what() const throw() { return "Grade too low!";}
    };
};

std::ostream&  operator<<(std::ostream &o, Bureaucrat const & other);

#endif 

