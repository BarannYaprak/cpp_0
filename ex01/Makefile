NAME = PhoneBook
CFLAGS = -Wall -Werror -Wextra -std=C++98
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
	$(CPP) $(CFLAGS) $(SRC) -c $(OBJ)

clean:
	rm -rf $(OBJ)

fclean:clean
	rm -rf $(NAME)

re: fclean all

debug:fclean
	$(CPP) $(CFLAGS) $(SRC) -c $(OBJ)
	$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)


