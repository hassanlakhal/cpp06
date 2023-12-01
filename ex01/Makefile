# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 10:11:39 by hlakhal-          #+#    #+#              #
#    Updated: 2023/11/29 14:15:47 by hlakhal-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serializer

SRC = Serializer.cpp main.cpp

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