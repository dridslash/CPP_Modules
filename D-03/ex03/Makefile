NAME = Diamond_Trap

COMPILE = c++ -Wall -Werror -Wextra

Flag = -std=c++98

SR_F = ClapTrap.cpp\
	   FragTrap.cpp\
	   ScavTrap.cpp\
	   DiamondTrap.cpp\
	   main.cpp

all: $(NAME)
$(NAME) : $(SR_F)
	@$(COMPILE) $(Flag) $(SR_F) -o $(NAME)
	@echo "\033[0;32mex03 generated"

clean:
	@echo "\033[0;31mFiles deleted"

fclean : clean
	@rm -rf $(NAME)

re : fclean all

.PHONNY: all clean fclean re