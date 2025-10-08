CC     = c++
SRC    = main.cpp newZombie.cpp Zombie.cpp randomChump.cpp
OBJ    = $(SRC:%.cpp=%.o)
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME   = Zombie
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
