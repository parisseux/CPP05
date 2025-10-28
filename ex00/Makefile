NAME = bureaucrat
CXX = g++
CXXFLAGS = -Wall -WError -Wextra  -std=c++98
RM = rm -f
FILES = main.cpp Bureaucrat.cpp
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

