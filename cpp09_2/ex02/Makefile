NAME = PmergeMe
SRCS = main.cpp PmergeMe.cpp
CC = c++ -std=c++98
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -o $(NAME) $(SRCS)

clean:
	rm -rf $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean re