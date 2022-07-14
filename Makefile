NAME		= libftprintf.a

HEADER		= libftprintf.h

SRCS		= ft_printf.c \
		  		ft_pointer.c \
		  		ft_printfunc.c \
		  		ft_putnbr.c \
		  		ft_putnbr_u.c \
		  		ft_put_hexa.c 

OBJS		= $(SRCS:.c=.o)

CC			= cc

RM			= rm -f

CFLGAS		= -Wall -Werror -Wextra

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
