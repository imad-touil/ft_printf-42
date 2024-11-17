NAME =  libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_putchar.c ft_putstr.c\
	ft_putaddress.c ft_putnbr.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)


$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c libftprintf.a
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean  
