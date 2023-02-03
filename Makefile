NAME	:=	push_swap

HEADER 	:= push_swap.h

LIBFT 		:= ./libft

LIBFTLIB	:= $(LIBFT)/libft.a

HEADERS	:=	-I $(LIBFT) -I includes -I $(MLX)/includes

SRC	:=	./srcs/main.c \

OBJ := $(SRC:.c=.o)

CC	:=	gcc 
# -fsanitize=address

CFLAGS	:= -Wall -Wextra -Werror

all: libs $(NAME)

libs:
	$(MAKE) -C libft

$(NAME): $(OBJ)
	$(CC) $^ $(LIBFTLIB) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	$(MAKE) -C libft clean

fclean:
	rm -f $(NAME) $(OBJ)
	$(MAKE) -C libft fclean

re: fclean all

.PHONY: all clean fclean re
