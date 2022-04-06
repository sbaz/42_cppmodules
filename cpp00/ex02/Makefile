#   --Makefile--

NAME = account

CC = clang++

FLAGS = -Wall -Wextra -Werror

CPP98 = -std=c++98

SRCS = Account.cpp\
		tests.cpp\
		

OBJ = $(SRCS;.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(CPP98) $(SRCS) -o $(NAME) 

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME) $(FLAGS_98)

re:	fclean all

.PHONY: all clean fclean re
