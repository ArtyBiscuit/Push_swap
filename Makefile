NAME = push_swap
SRC = check_input.c check_input_utils.c ft_free.c main.c ra_rb_rr.c rra_rrb_rrr.c lst_create.c radix_sort.c pa_pb.c $(wildcard libft/*.c)
OBJ = $(SRC:%.c=%.o)
INC = -Ilibft
LIB = libft/libft.a
LIBFTFLAGS = -Llibft -lft
LIBFT = libft/
CC = clang
CFLAGS = -Wall -Werror -Wextra -g3

all: $(NAME)

$(NAME): $(OBJ) $(LIB)
	$(CC) $(CFLAGS) $(LIBFTFLAGS) $(OBJ) -o $(NAME)

$(LIB):
	make -C $(LIBFT)

%.o: %.c
	$(CC) $(CFLAGS) $(INC) $< -c -o $@

clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY:
	all clean fclean re
