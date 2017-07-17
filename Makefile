CC = gcc
NAME = fillit
FLAGS = -Wall -Werror -Wextra

all:
	$(CC) $(FLAGS) main.c read.c help.c 