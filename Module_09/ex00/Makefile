# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/31 11:23:03 by ede-alme          #+#    #+#              #
#    Updated: 2023/04/07 15:42:34 by ede-alme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	btc

SRC =	main.cpp \
		BitcoinExchange.cpp \

OBJ =	$(SRC:.cpp=.o)

CXX =	c++

CXXFLAGS =	-Wall -Werror -Wextra -std=c++98

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@

all: $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

# Regular Colors
Black='\033[0;30m'        # Black
Red='\033[0;31m'          # Red
Green='\033[0;32m'        # Green
Yellow='\033[0;33m'       # Yellow
Blue='\033[0;34m'         # Blue
Purple='\033[0;35m'       # Purple
Cyan='\033[0;36m'         # Cyan
White='\033[0;37m'        # White
Color_Off='\033[0m'       # Text Reset

t: re
	@echo $(Red) "Starting some testes for "$(Green)   $(NAME)    $(Red) $(Color_Off)
	clear 
	@valgrind --leak-check=full ./$(NAME) input.txt

.PHONY: all clean fclean re t
