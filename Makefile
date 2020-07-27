##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## projet my_ls
##

NAME	=	my_hunter

SRC	=	SRC/main.c\
		SRC/duck.c\
		SRC/creation.c

OBJ	=	$(SRC:.c=.o)

CPPFLAGS	=	-I include/

CC	=	gcc

all:		$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CPPFLAGS) -lc_graph_prog

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
