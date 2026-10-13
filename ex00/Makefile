# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: byaprak <byaprak@student.42istanbul.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/12 20:56:16 by byaprak           #+#    #+#              #
#    Updated: 2026/10/13 15:19:48 by byaprak          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = megaphone.cpp
OBJ = megaphone.0
all:$(NAME)

$(NAME):$(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

$(OBJ):$(SRC)
	$(CPP) $(CPPFLAGS) $(SRC) -c $(OBJ)

clean:
	rm -rf $(OBJ)

fclean:clean
	rm -rf $(NAME)

re: fclean all

debug:fclean
	$(CPP) $(CPPFLAGS) $(SRC) -g -c $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -g -o $(NAME)