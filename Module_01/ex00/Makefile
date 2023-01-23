# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/22 19:58:32 by ede-alme          #+#    #+#              #
#    Updated: 2023/01/22 20:29:25 by ede-alme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

SRC =	tests.cpp \
		Account.cpp

OBJ = $(SRC:.cpp=.o)

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@

all: $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

t: re
	@./$(NAME)

.PHONY: all clean fclean re t