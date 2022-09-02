NAME = Harl_2.0

COMPILE = c++ -Wall -Werror -Wextra -fsanitize=address

Flag = -std=c++98

SR_F = Harl.cpp\
	   main.cpp\

all: $(NAME)
$(NAME) : $(SR_F)
	@$(COMPILE) $(Flag) $(SR_F) -o $(NAME)
	@echo "\033[0;32mex05 generated"

clean:
	@echo "\033[0;31mFiles deleted"

fclean : clean
	@rm -rf $(NAME)

re : fclean all

.PHONNY: all clean fclean re