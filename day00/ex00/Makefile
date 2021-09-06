# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/11 08:49:42 by amoussai          #+#    #+#              #
#    Updated: 2021/03/11 08:50:02 by amoussai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=megaphone
LIBFT=libft.a
SRCS=megaphone.cpp		
OBJ=$(SRCS:.cpp=.o)
FLAGS=-Wall -Werror -Wextra
CC=clang++

.PHONY: clean bonus fclean all re

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -g $(SRCS) $(CFLAGS) -o $(NAME)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
