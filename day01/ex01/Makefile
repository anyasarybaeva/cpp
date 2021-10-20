NAME=Zombie
SRC=Zombie.cpp main.cpp zombieHorde.cpp
OBJ=$(SRC:.cpp=.o)
CC=clang++
FLAGS=-Wall -Werror -Wextra
RM=rm -f
%.o: %.cpp
	$(CC) $(FLAGS) -c -o $@ $<

all: $(NAME)

$(NAME):$(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $@

clean:
	$(RM) $(OBJ)

fclean:clean
	$(RM) $(NAME)
re:
	fclean all
.PHONY:all clean fclean re
