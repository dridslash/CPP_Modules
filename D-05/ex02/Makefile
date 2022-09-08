NAME = Manage_forms

COMPILE = c++ #-Wall -Werror -Wextra

Flag = -std=c++98

SR_F = 	Bureaucrat.cpp\
		PresidentialPardonForm.cpp\
		RobotomyRequestForm.cpp\
		ShrubberyCreationForm.cpp\
		Form.cpp\
		main.cpp

all: $(NAME)
$(NAME) : $(SR_F)
	@$(COMPILE) $(Flag) $(SR_F) -o $(NAME)
	@echo "\033[0;32mex02 generated"

clean:
	@echo "\033[0;31mFiles deleted"

fclean : clean
	@rm -rf $(NAME) home_shrubbery

re : fclean all

.PHONNY: all clean fclean re