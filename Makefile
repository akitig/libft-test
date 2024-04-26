LIBFTDIR    = ../libft/
SRCS        = test_is.c \
              test.c

CC          = cc
RM          = rm -f
CFLAGS      = -Wall -Werror -Wextra

NAME        = test

OBJS        = $(SRCS:.c=.o)

$(NAME):	$(OBJS) $(LIBFTDIR)libft.a
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -L $(LIBFTDIR) -lft

$(LIBFTDIR)libft.a:
		make -C $(LIBFTDIR)

all:        $(NAME)

start_tests:
			make -C $(LIBFTDIR)

%.o:        %.c
			$(CC) $(CFLAGS) -o $@ -c $^


clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re