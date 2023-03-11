NAME = push_swap
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = push_swap.c maindevcont.c lessthanseven.c maindevcont2.c maindevcont3.c radix.c seventomore.c sortingcommand.c thecase.c
OBJ = $(SRC:.c=.o)
LBFT = libft/libft.a
PR	= ft_printf/libftprintf.a


all: $(NAME)

$(NAME):$(OBJ) $(LBFT) $(PR)
	$(CC) $(CFLAGS) $(LBFT) $(PR) $(OBJ) -o $(NAME)

$(LBFT):
	make -C ./libft

$(PR):
	make -C ./ft_printf

clean: 
		make -C ./ft_printf fclean
		make -C ./libft fclean
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re