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

SRCS_TESTS	:=	$(shell find $(SRC_DIRS) -name "*.c" \
			-not -name "main.c"	\
			-not -name "./lib/*.c"	\
			-not -path "./tests/*"	\
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
	make -C ./lib/my/
	gcc -o unit_tests $(SRCS_TESTS) ./tests/*.c ./lib/libmy.a \
	-lcriterion --coverage
	make clean
	./unit_tests
