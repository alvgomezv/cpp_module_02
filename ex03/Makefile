CPP = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Fixed.cpp Point.cpp bsp.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = bsp

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
