##
## EPITECH PROJECT, 2023
## makefile
## File description:
## libmy
##

NAME	=	libhashtable.a

CFLAGS	=	-Wall -Wextra -Werror -g3

SRCS    :=      $(shell find $(SRC_DIRS) -name "*.c" \
                        -not -name "main.c"     \
                        )

OBJS	=	$(SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

tests_run: re
	$(CC) -o unit_tests ./tests/*.c $(NAME) -lcriterion --coverage
	./unit_tests
