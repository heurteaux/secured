##
## EPITECH PROJECT, 2023
## makefile
## File description:
## libmy
##

NAME	=	libhashtable.a

CFLAGS	=	-Wall -Wextra -Werror -g3 \

SRCS    :=      $(shell find $(SRC_DIRS) -name "*.c" \
                        -not -name "main.c"     \
                )

OBJS	=	$(SRCS:.c=.o)

all:	$(NAME)
	mkdir -p includes
	$(MAKE) -C ./lib/my -f Makefile
	$(MAKE) -C ./lib/mlist -f Makefile

$(NAME):	$(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
		$(MAKE) -C ./lib/my -f Makefile clean
		$(MAKE) -C ./lib/mlist -f Makefile clean

fclean:
		$(MAKE) -C ./lib/my -f Makefile fclean
		$(MAKE) -C ./lib/mlist -f Makefile fclean
		rm -f $(NAME)

re: fclean all
