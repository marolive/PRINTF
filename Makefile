NAME		= libftprintf.a

HEADER		= libftprintf.h

SRCS		= ft_printf.c \
		  		ft_putchar.c \
		  		ft_putstr.c \
		  		ft_uputnbr.c \
		  		ft_putnbr.c \
		  		ft_strchr.c 

OBJS		= $(SRCS:.c=.0)

CC			= cc

RM			= rm -f

CFLGAS		= -Wall -Werror - Wextra

.c.0:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(HEADER) $(OBJS)
			ar rcs $(NAME) $(OBJS)

all:		$(NAME)

clean:	
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
