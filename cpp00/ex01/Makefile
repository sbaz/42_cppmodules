#   --Makefile--

FLAGS	=	#-Wall -Wextra -Werror
NAME	=	phonebook
CC		=	g++
SRC		=	phonebook.cpp \
			Contact.class.cpp
OBJ		=	$(SRC:.cpp=.o)
#Phonebook.class.cpp \

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(SRC) -o $@

clean:
	rm -fr $(OBJ)

fclean:
	make clean
	rm -fr $(NAME)

re: fclean all