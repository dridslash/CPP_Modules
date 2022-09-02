NAME = file_manp

COMPILE = c++ -Wall -Werror -Wextra -fsanitize=address

Flag = -std=c++98

SR_F = main.cpp

SRC_OBJ = ${SR_F:.cpp=.o}

%.o: %.cpp
	@$(COMPILE) $(FLAG) -c $? -o $@

all: $(NAME)
$(NAME) : $(SRC_OBJ)
	@$(COMPILE) $(Flag) $(SRC_OBJ) -o $(NAME)
	@echo "\033[0;32mex04 generated"

clean:
	@rm -rf *.o
	@echo "\033[0;31mFiles deleted"

fclean : clean
	@rm -rf $(NAME)

re : fclean all

.PHONNY: all clean fclean re