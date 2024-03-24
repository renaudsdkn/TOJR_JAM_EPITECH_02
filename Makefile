##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC	=	jam.c	\
		split.c	\
		file.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	jam_epitech

$(NAME):	all

all:
	gcc -o $(NAME) $(SRC) -l csfml-graphics \
	-l csfml-window -l csfml-system -l csfml-audio

clean:
	rm -f $(OBJ) *~ *#

fclean:	clean
	rm -f $(NAME)

re:	fclean all
