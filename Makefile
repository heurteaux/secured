##
## EPITECH PROJECT, 2023
## makefile
## File description:
## libmy
##

NAME	=	secured

CFLAGS	=	-Wall -Wextra -Werror \
	-Wno-unused-variable -Wno-unused-parameter -Wno-unused-but-set-variable

SRC_DIRS	=	./src

CSFML_FLAGS	=	-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

LIB_FLAGS	=	-L./lib/my -lmy -L./lib/mlist -lmlist -lm

SRCS := $(wildcard $(shell find $(SRC_DIRS) -name '*.c'))
all:
	mkdir -p includes
	$(MAKE) -C ./lib/my -f Makefile
	$(MAKE) -C ./lib/mlist -f Makefile
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS) -g3 -I./includes $(LIB_FLAGS)

clean:
		$(MAKE) -C ./lib/my -f Makefile clean
		$(MAKE) -C ./lib/mlist -f Makefile clean

fclean:
		$(MAKE) -C ./lib/my -f Makefile fclean
		$(MAKE) -C ./lib/mlist -f Makefile fclean
		rm -f $(NAME)

re: fclean all

run: all
	./$(NAME)
