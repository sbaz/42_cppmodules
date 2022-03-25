#   --Makefile--

NAME = phonebook

FLAGS_98 = phonebookcpp98

CC = c++

FLAGS = -Wall -Wextra -Werror

CPP98 = -std=c++98

SRCS = phonebook.cpp

OBJ = $(SRCS;.c=.o)

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRCS) -o $(NAME) 

cpp98 : $(FLAGS_98)

$(FLAGS_98):
	$(CC) $(FLAGS) $(CPP98) $(SRCS) -o $(FLAGS_98) 


clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME) $(FLAGS_98)

re:	fclean all

.PHONY: all clean fclean re
