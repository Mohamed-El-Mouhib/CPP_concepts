CXX     = c++
SRC    = main.cpp AMateria.cpp Cure.cpp Ice.cpp Icharacter.cpp
CXXFLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98
NAME   = a.out

all:	$(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
