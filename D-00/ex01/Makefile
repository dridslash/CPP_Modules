
NAME = phonebook_management

COMPILE = clang++ -Wall -Werror -Wextra

Flag = -std=c++98

SR_F = PhoneBook.cpp\
	   main_testing.cpp\
	   Contact.cpp


SRC_OBJ = ${SR_F:.cpp=.o}

%.o: %.cpp
	@$(COMPILE) $(FLAG) -c $? -o $@

all: $(NAME)
$(NAME) : $(SRC_OBJ)
	@$(COMPILE) $(Flag) $(SRC_OBJ) -o $(NAME)
	@echo "\033[0;32mPhonebook_generated"

clean:
	@rm -rf *.o
	@echo "\033[0;31mFiles deleted"

fclean : clean
	@rm -rf $(NAME)

re : fclean all

.PHONNY: all clean fclean re