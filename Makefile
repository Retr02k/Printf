NAME = libftprintf.a
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

CC = cc
CFLAGS = -Wall -Werror -Wextra -I$(LIBFT_DIR)
SRCS = ft_printf.c helpers.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -fr $(OBJS)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -fr $(NAME)
	rm -fr a.out
	make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re