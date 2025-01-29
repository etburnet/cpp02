# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/29 10:12:18 by eburnet           #+#    #+#              #
#    Updated: 2025/01/29 10:14:02 by eburnet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = canon
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Fixed.cpp
OBJS = $(SRC:.cpp=.o)
HEADERS = Fixed.hpp

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME)
	
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re%  