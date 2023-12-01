# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/01 10:19:57 by hlakhal-          #+#    #+#              #
#    Updated: 2023/12/01 13:10:37 by hlakhal-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = base

SRC = Base.cpp  A.cpp B.cpp C.cpp main.cpp

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
