NAME = fillit

CC = gcc

FLAGS = -Wall -Werror -Wextra

SRC = main.c help.c read.c volvo.c

SRC_DIR = src/

OBJ = $(SRC:.c=.o)

SRC_PATH = $(addprefix $(SRC_DIR),$(SRC))

LIBFT = libft/libft.a

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME) $(LIBFT)

$(OBJ): $(LIBFT)
	$(CC) $(FLAGS) -c $(SRC_PATH)

$(LIBFT):
	make -C ./libft/

clean:
	rm -f $(OBJ)
		make clean -C ./libft/

fclean: clean
	rm -f $(NAME)
		make fclean -C ./libft/

re: fclean all

k:
	$(CC) $(FLAGS) $(SRC_PATH) -o $(NAME) $(LIBFT)