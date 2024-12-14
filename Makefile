# -*- Makefile -*-

CC = cc

CFLAGS = -Wall -Wextra -Werror 

NAME = libftprintf.a

ARFLAGS = rcs

SRCS = ft_printf.c	ft_upper_hex.c 		ft_specifiers.c		ft_lower_hex.c		ft_putstr.c		ft_putchar.c 	ft_putnbr.c	ft_putptr.c\
 	ft_put_unint.c 	

OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	
$(NAME): $(OBJS)
	ar $(ARFLAGS) $@ $^

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
