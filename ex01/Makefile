NAME = PhoneBook
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
CXX = c++
SRC = contact.cpp \
		phonebook.cpp \
		add_person.cpp \
		main.cpp

OBJ = contact.o \
		phonebook.o \
		add_person.o \
		main.o

all:$(NAME)

$(NAME):$(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(OBJ):$(SRC)
	$(CXX) $(CXXFLAGS) -c $(SRC)

clean:
	rm -rf $(OBJ)

fclean:clean
	rm -rf $(NAME)

re: fclean all

debug:fclean
	$(CXX) $(CXXFLAGS) -fsanitize=address -g3 -c $(SRC)
	$(CXX) $(CXXFLAGS) $(OBJ) -fsanitize=address -g -o $(NAME)


