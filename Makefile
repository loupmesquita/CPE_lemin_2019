##
## EPITECH PROJECT, 2020
## make
## File description:
## Makefile
##

SRC	=	lib/my_put_nbr.c		\
		lib/my_putstr.c			\
		lib/my_putchar.c		\
		lib/my_getnbr.c			\
		lib/my_putstr_tab.c		\
		lib/my_strlen.c			\
		lib/my_str_to_word_array.c	\
		lib/my_strcat.c			\
		lib/my_strcpy.c			\
		lib/my_strdup.c			\
		lib/get_next_line.c		\
		lib/open_file.c         \
		src/lemin.c             \
		src/delete.c            \
		src/get_stock.c         \


OBJS	=	$(SRC:.c=.o)

NAME	=	lem_in

CFLAGS  =	-I./include -g3

all: 		$(NAME)

$(NAME):	$(OBJS)
	gcc -o $(NAME) $(OBJS) $(CFLAGS)

clean:
	rm -f $(OBJS)

fclean:		clean
	rm -f $(NAME)

re:		fclean all