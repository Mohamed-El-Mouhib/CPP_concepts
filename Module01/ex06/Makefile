CC     = c++
SRC    = main.cpp Harl.cpp
OBJ    = $(SRC:%.cpp=%.o)
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME   = harlFilter

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
