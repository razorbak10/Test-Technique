##
## EPITECH PROJECT, 2021
## Test-Technique
## File description:
## Makefile
##


NAME   = Test-Technique


SRC    =  Main.cpp

OBJ=     $(SRC:.cpp=.o)

all:     $(NAME)

$(NAME):  $(OBJ)
		g++ -o   $(NAME) $(OBJ) -Wall -Wextra -Werror
		rm -f $(OBJ)

	rm -f $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(OBJ)

re: fclean all