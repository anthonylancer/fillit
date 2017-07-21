NAME = fillit
CC = gcc
FLAGS = -Wall -Werror -Wextra

all: libft $(NAME)

libft:
	make -C ../libft/


$(NAME):
	$(CC) $(FLAGS) -L../libft -lft main.c 