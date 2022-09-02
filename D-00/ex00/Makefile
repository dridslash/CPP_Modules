NAME = megephone

COMPILE = clang++ -Wall -Werror -Wextra

Flag = -std=c++98

SR_F = megaphone.cpp

SRC_OBJ = ${SR_F:.cpp=.o}

%.o: %.cpp
	@$(COMPILE) $(FLAG) -c $? -o $@

all: $(NAME)
$(NAME) : $(SRC_OBJ)
	@$(COMPILE) $(Flag) $(SRC_OBJ) -o $(NAME)
	@echo "\033[0;32mMegaphone generated"
clean:
	@rm -rf $(NAME)
	@rm -rf *.o
	@echo "\033[0;31mFiles deleted"

fclean : clean

re : fclean all

.PHONNY: all clean fclean re