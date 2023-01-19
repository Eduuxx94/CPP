# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/19 15:33:43 by ede-alme          #+#    #+#              #
#    Updated: 2023/01/19 23:37:06 by ede-alme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC =	main.cpp \
		Contact.cpp \
		Phonebook.cpp \

OBJ = $(SRC:.cpp=.o)

CC = g++
FLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $@

all: $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

t: re
	@./phonebook

.PHONY: all clean fclean re t