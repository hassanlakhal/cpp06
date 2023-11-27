# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/27 00:46:47 by hlakhal-          #+#    #+#              #
#    Updated: 2023/11/27 00:48:30 by hlakhal-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

SRC = ScalarConverter.cpp main.cpp

CXXFLAGS = -Wall -Wextra -Werror

CXX = c++ -std=c++98 

all:$(NAME)

OBJ = $(SRC:.cpp=.o)


$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(OBJ)
	
fclean:clean
	rm -rf $(NAME)
	
re: fclean all
	