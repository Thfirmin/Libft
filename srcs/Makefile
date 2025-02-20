NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

DFLAGS=

SRCS = test.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
ifndef (,$(shell ls $(OBJS) 2>/dev/null))
	rm -f $(OBJS)
endif

fclean: clean
ifndef (,$(shell ls $(NAME) 2>/dev/null))
	rm -f $(NAME)
endif

re: fclean all

debug: DFLAGS=-g

debug: re

.c.o:
	$(CC) $(CFLAGS) $(DFLAGS) -c $< -o $(<:.c=.o)

.PHONY: all clean fclean re debug