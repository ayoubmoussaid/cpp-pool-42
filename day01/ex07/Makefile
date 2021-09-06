# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/07 16:05:01 by amoussai          #+#    #+#              #
#    Updated: 2021/05/08 08:48:51 by amoussai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=replace
SRCS=main.cpp		
OBJ=$(SRCS:.cpp=.o)
FLAGS=-Wall -Werror -Wextra
CC=clang++

.PHONY: clean bonus fclean all re

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
