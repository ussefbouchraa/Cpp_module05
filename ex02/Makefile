NAME = Bureaucrat
CC =  c++ -Wall -Wextra -Werror -std=c++98
RM = rm -rf
FILE = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp
OBJ = $(FILE:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $@

%.o : %.cpp Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp
	$(CC) -c $< -o $@ 

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all	