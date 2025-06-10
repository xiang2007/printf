CC = gcc
CFLAGS = -Wall -Werror -Wextra -I./include
AR = ar rcs
RM = rm -f

SRC = $(shell find -name "*.c")
OBJ = $(SRC:.c=.o)
NAME = libft.a

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean fclean re all cc

cc:
	$(CC) $(CFLAGS) $(SRC) $(NAME)

clean:
	$(RM) $(OBJ)

fclean:	clean

all: $(NAME)
	$(AR) $(NAME) $(OBJ)

re: fclean all