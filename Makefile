NAME = push_swap
SRC = check_input.c check_input_utils.c ft_free.c get_id.c get_input.c lst_create.c main.c pa_pb_ra_rra.c radix_exe.c radix_sort.c sa_sb.c $(wildcard libft/*.c)
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
