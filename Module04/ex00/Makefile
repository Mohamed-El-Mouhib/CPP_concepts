CC     = c++
SRC    = main.cpp Animal.cpp Dog.cpp Cat.cpp
OBJ    = $(SRC:%.cpp=%.o)
CXXFLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98
NAME   = Animal

all:	$(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
