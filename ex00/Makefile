NAME = 
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Fixed.cpp  Fixed.hpp  main.cpp
OBJS = $(SRCS:.cpp=.o)
HEADER = Zombie.hpp

%.o: %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) 
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re