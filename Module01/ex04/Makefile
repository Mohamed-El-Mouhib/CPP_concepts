CC     = c++
SRC    = main.cpp FileManager.cpp
OBJ    = $(SRC:%.cpp=%.o)
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME   = notsed

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
