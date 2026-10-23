NAME = PhoneBook
CFLAGS = -Wall -Werror -Wextra -std=c++98
CPP = c++
SRC = contact.cpp \
		phonebook.cpp \
		main.cpp

OBJ = contact.o \
		phonebook.o \
		main.o

all:$(NAME)

$(NAME):$(OBJ)
	$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ):$(SRC)
	$(CPP) $(CFLAGS) -c $(SRC)

clean:
	rm -rf $(OBJ)

fclean:clean
	rm -rf $(NAME)

re: fclean all

debug:fclean
	$(CPP) $(CFLAGS) -fsanitize=address -g3 -c $(SRC)
	$(CPP) $(CFLAGS) $(OBJ) -fsanitize=address -g -o $(NAME)


