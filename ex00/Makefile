NAME = CONVERTER
CC = c++ -o -g -O0
CFLAGZ = -Wall -Wextra -Werror -std=c++98 -Iinclude
SRCS = main.cpp ScalarConverter.cpp Utils.cpp

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAGZ) -g -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC)	$(CFLAGZ)	-o	$(NAME)	$(OBJS) 

clean:
	rm -f $(OBJS) 

fclean: clean
	rm -f $(NAME)
	
re: fclean all