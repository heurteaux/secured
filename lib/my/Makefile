##
## EPITECH PROJECT, 2023
## makefile
## File description:
## libmy
##

NAME	=	libmy.a

SRCS	=		mprintf.c	\
				my_compute_power_rec.c	\
				my_put_nbr.c	\
				my_putchar.c	\
				my_putstr.c	\
				my_strcmp.c	\
				my_strlen.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-Wall -Werror -Wextra

all:	$(NAME)
	cp $(NAME) ../

$(NAME):	$(OBJS)
	ar rc $(NAME) $(OBJS)
	mkdir -p ../../includes
	cp my.h ../../includes

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re:	fclean all
