#include "../inc/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
}
ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::ExecuteAction() const 
{
    std::string file_name = _target + "_shrubbery";
    std::ofstream MyFile(file_name.c_str());
    if (!MyFile.is_open())
    {
        std::cerr << "Error: could not open file " << file_name << std::endl;
        return;
    }

    MyFile << R"SHRUB(
                     /\
                    /**\
                   /****\
                  /******\
                 /********\
                /**********\
               /************\
              /**************\
             /****************\
            /******************\
           /********************\
          /****** /\  /\  /\ ****\
         /****** /  \/  \/  \*****\
        /****** /            \*****\
       /****** /              \*****\
      /****** /                \*****\
     /********************************\
    /**********************************\
   /**********  MERRY  CHRISTMAS  ******\
                ||||||||||
                ||||||||||
                ||||||||||
                ||||||||||
                ||||||||||
    )SHRUB";
    MyFile.close();
}