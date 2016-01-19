##
## Makefile for  in /home/user/DEVC/Battle/verche_a
##
## Made by VERCHERE Alexandre
## Login   <verche_a@etna-alternance.net>
##
## Started on  Mon Nov 30 23:51:29 2015 VERCHERE Alexandre
## Last update Tue Dec  1 05:06:16 2015 VERCHERE Alexandre
##

CC	=	gcc

NAME	=	sta

SRC	=	main.c			\
		getCreature.c		\
		header.c		\
		invalid_args.c		\
		invalid_usage.c		\
		is_option.c		\
		my_putstr.c		\
		my_strcmp.c		\
		my_strcpy.c		\
		my_putchar.c		\
		my_put_nbr.c		\
		parsing_args.c		\
		readline.c		\
		starter.c		\
		user_input.c		\

OBJ	=	$(SRC:%.c=%.o)

RM	=	rm -f

CFLAGS	=	-W -Wall -Wextra -Werror

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)

all:		$(NAME)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all
