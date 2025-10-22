#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp" 
# include <fstream>


class ShrubberyCreationForm : public AForm
{
private:
    const std::string _target;
public:
    ShrubberyCreationForm(std::string target);
    ~ShrubberyCreationForm();
    void ExecuteAction() const ;
};

#endif