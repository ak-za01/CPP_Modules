NAME = Awesome_PhoneBook

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp PhoneBook.cpp Contact.cpp utils.cpp

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