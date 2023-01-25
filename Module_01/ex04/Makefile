# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/24 22:28:07 by ede-alme          #+#    #+#              #
#    Updated: 2023/01/25 12:53:11 by ede-alme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

SRC =	main.cpp \

OBJ = $(SRC:.cpp=.o)

CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@

all: $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)
	@rm -rf file.txt
	@rm -rf file.txt.replace

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
	@echo "Looking for \"Ola mundo\" in the file and will replace for \"Bye!\""
	@echo "Ola mundo\n""A escola 42 é top!\n""Ola mundo\n""A melhor escola!" > file.txt
	@valgrind ./$(NAME) file.txt "Ola mundo" "Bye!"

.PHONY: all clean fclean re t