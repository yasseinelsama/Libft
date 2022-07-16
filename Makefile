

NAME = libft.a

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c ft_*.c
	ar rc $(NAME) *.o

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

test:
	gcc -Wall -Werror -Wextra 2.c -o out
	./out
	/bin/rm -f out