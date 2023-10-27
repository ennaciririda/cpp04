# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/04 11:06:35 by rennacir          #+#    #+#              #
#    Updated: 2023/10/25 15:51:11 by rennacir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= rida

CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf
OBJDIR = .objFiles
FILES		= main Animal Cat Dog WrongAnimal WrongCat
SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER		= Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

#Colors:
GREEN		=	$(shell tput setaf 2)
YELLOW		=	$(shell tput setaf 3)
RESET		=	$(shell tput sgr0)


all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CC) $(OBJ) -o $(NAME)
	@printf "$(_SUCCESS) $(GREEN)- Executable ready.\n$(RESET)"

$(OBJDIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJDIR) $(OBJ)
	@printf "$(YELLOW)    - Object files removed.$(RESET)\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(YELLOW)    - Executable removed.$(RESET)\n"

re: fclean all
.PHONY: all clean fclean re