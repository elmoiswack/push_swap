NAME	:=	push_swap

HEADER 	:= push_swap.h

LIBFT 		:= ./libft

LIBFTLIB	:= $(LIBFT)/libft.a

HEADERS	:=	-I $(LIBFT) -I includes -I $(MLX)/includes

SRC	:=	./srcs/main.c \
		./srcs/free_error.c \
		./srcs/argument_checker.c \
		./srcs/overflow_check.c \
		./srcs/doubles_checker.c \
		./srcs/into_stack.c \
		./srcs/operations/swap.c \
		./srcs/operations/rotate.c \
		./srcs/operations/reverse_rotate.c \
		./srcs/operations/push.c \
		./srcs/writing.c \
		./srcs/sorting.c \
		./srcs/smaller_sorting.c \
		./srcs/sorting_helpers.c \

OBJ := $(SRC:.c=.o)

CC	:=	gcc 

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
