##
## EPITECH PROJECT, 2023
## makefile
## File description:
## libmy
##

NAME	=	libmlist.a

SRCS	=	mlist_add.c	\
		mlist_create.c	\
		mlist_dup.c	\
		mlist_getindex.c	\
		mlist_getindexdata.c	\
		mlist_len.c	\
		mlist_free.c	\
		mlist_put.c	\
		mlist_remove.c	\
		mlist_swap.c	\
		mlist_reverse.c	\


OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-Wall -Werror -Wextra

all:	$(NAME)
	cp $(NAME) ../

$(NAME):	$(OBJS)
	ar rc $(NAME) $(OBJS)
	mkdir -p ../../includes
	cp mlist.h ../../includes

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re:	fclean all
