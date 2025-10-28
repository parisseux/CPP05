NAME = intern
CXX = g++
CXXFLAGS = -Wall -Werror -Wextra  -std=c++98
RM = rm -f
FILES = Bureaucrat.cpp AForm.cpp main.cpp  PresidentialPardonForm.cpp  ShrubberyCreationForm.cpp RobotomyRequestForm.cpp Intern.cpp
OBJ = $(FILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

.PHONY: all clean fclean re
