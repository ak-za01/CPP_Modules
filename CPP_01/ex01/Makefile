NAME = zombie_horde

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98
# CFLAGS = -Wall -Wextra -Werror -g -fsanitize=address \
# -fno-omit-frame-pointer -std=c++98

SRCS = main.cpp Zombie.cpp zombieHorde.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re