CC     = c++
SRC    = main.cpp ClapTrap.cpp ScavTrap.cpp DiamondTrap.cpp FragTrap.cpp
OBJ    = $(SRC:%.cpp=%.o)
CPPFLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98
NAME   = DiamondTrap

all:	$(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
