##
## EPITECH PROJECT, 2023
## makefile
## File description:
## libmy
##

NAME	=	libmy.a

SRCS	=	concat_params.c	\
		my_compute_power_it.c	\
		my_compute_power_rec.c	\
		my_compute_square_root.c \
		my_find_prime_sup.c	\
		my_getnbr.c	\
		my_is_prime.c	\
		my_putchar.c	\
		mprintf.c	\
		my_putnchar.c	\
		my_putstr.c	\
		my_put_nbr.c	\
		my_revstr.c	\
		my_showmem.c	\
		my_abs.c	\
		my_strcpy.c	\
		my_show_word_array.c	\
		my_sort_word_array.c	\
		my_sort_int_array.c	\
		my_sort_params.c	\
		my_strcapitalize.c	\
		my_strcat.c	\
		my_strcmp.c	\
		my_strstr.c	\
		my_strdup.c	\
		my_str_isalpha.c	\
		my_str_islower.c	\
		my_str_isnum.c	\
		my_str_isupper.c	\
		my_strlen.c	\
		my_strlowcase.c	\
		my_strncat.c	\
		my_strncmp.c	\
		my_strncpy.c	\
		my_str_to_word_array.c	\
		my_strupcase.c	\
		my_swap.c	\
		my_tablen.c	\
		my_tabswap.c \
		my_newline.c	\
		my_debug.c	\
		my_putfloat.c	\
		my_putdouble.c	\
		my_put_err.c	\

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
