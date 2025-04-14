# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/09 20:34:48 by vahemere          #+#    #+#              #
#    Updated: 2025/04/14 13:05:39 by vahemere         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_malcolm
SRC = main.c srcs/parsing.c srcs/utils.c
OBJ = $(SRC:.c=.o)
HEADERS = includes/ft_malcolm.h
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re