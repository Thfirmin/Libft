NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

DFLAGS=

SRC_LIST = \
		   isalpha

FT_LIST = $(addprefix ft_,$(SRC_LIST))

SRCS = $(addprefix $(FT_LIST),.c)

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

test: all $(SRC_LIST)

$(SRC_LIST): DFLAGS=-g

$(SRC_LIST):
	@echo "==========| TESTING $@ |=========="
	$(CC) $(CFLAGS) $(DFLAGS) -I. test/ft_${@}_test.c -o test/exec/${@}.out -L. -lft
	@test/exec/${@}.out
	@rm test/exec/${@}.out

.c.o:
	$(CC) $(CFLAGS) $(DFLAGS) -c $< -o $(<:.c=.o)

.PHONY: all clean fclean re debug $(SRC_LIST) test
