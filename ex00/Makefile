NAME = Zombiees
CC = c++
CFLAGS =  -Wall -Wextra -Werror

SOURCES = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
		
OBJECTS = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS) 

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all