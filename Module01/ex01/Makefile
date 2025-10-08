CC     = c++
SRC    = main.cpp Zombie.cpp zombieHorde.cpp
OBJ    = $(SRC:%.cpp=%.o)
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME   = Horde_of_Zombies
# HEADERS   = *.hpp

all: $(NAME)
 # $(HEADERS)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
