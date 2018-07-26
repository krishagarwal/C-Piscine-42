# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kagarwal <kagarwal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/25 11:00:57 by kagarwal          #+#    #+#              #
#    Updated: 2018/07/26 11:12:24 by kagarwal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FILES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
		srcs/ft_strlen.c srcs/ft_swap.c
OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEADERS = includes\ft.h

all:
	gcc -Wall -Wextra -Werror -c $(FILES) -I $(HEADERS)
	libtool -static -o $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -rf $(OBJECTS)

fclean:
	rm -rf $(NAME)

re: fclean all
