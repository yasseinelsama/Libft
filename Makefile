# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymohamed <ymohamed@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/25 13:53:10 by ymohamed          #+#    #+#              #
#    Updated: 2022/07/27 20:52:54 by ymohamed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES = \
		ft_isalnum.c ft_isprint.c ft_memcpy.c ft_putendl_fd.c ft_strchr.c ft_strlcat.c ft_strncmp.c ft_substr.c \
		ft_atoi.c ft_isalpha.c ft_itoa.c ft_memmove.c ft_putnbr_fd.c ft_strdup.c ft_strlcpy.c ft_strnstr.c \
		ft_tolower.c ft_bzero.c	ft_isascii.c ft_memchr.c ft_memset.c ft_putstr_fd.c ft_striteri.c ft_strlen.c \
		ft_strrchr.c ft_toupper.c ft_calloc.c ft_isdigit.c ft_memcmp.c ft_putchar_fd.c ft_split.c ft_strjoin.c \
		ft_strmapi.c ft_strtrim.c

SOURCESB = \
		ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c

OBJECTS = $(SOURCES:%.c=%.o)

OBJECTSB = $(SOURCESB:%.c=%.o)

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SOURCES) $(SOURCESB)
	ar rc $(NAME) $(OBJECTS) $(OBJECTSB)
	
bonus:
	gcc -Wall -Wextra -Werror -c $(SOURCESB)
	ar rc $(NAME) $(OBJECTSB)

clean:
	/bin/rm -f $(OBJECTS) $(OBJECTSB)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

