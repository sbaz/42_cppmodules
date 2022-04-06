#   --Makefile--

NAME = zombie

CC = c++

FLAGS = -Wall -Wextra -Werror

CPP98 = -std=c++98

SRCS = Zombie.class.cpp\
		randomChump.cpp\
		newZombie.cpp\
		main.cpp\

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME) 

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME) $(FLAGS_98)

re:	fclean all

.PHONY: all clean fclean re
