CC     = c++
SRC    = main.cpp
OBJ    = $(SRC:%.cpp=%.o)
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME   = a.out
# HEADERS   = *.hpp

all: $(NAME)
 # $(HEADERS)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
