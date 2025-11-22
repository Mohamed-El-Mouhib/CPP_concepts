CXX     = c++
SRC    = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp
CXXFLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98
NAME   = Animal

all:	$(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
