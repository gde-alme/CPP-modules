# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gde-alme <gde-alme@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/09 01:03:14 by gde-alme          #+#    #+#              #
#    Updated: 2023/03/23 17:05:43 by gde-alme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ================================================= #
NAME	=	polymorphism
# ================================================= #

# ================================================= #
SRCS_DIR	=	./
SRCS		=	Animal.cpp
SRCS 		+=	WrongAnimal.cpp
SRCS 		+=	WrongCat.cpp
SRCS 		+=	Dog.cpp
SRCS 		+=	Cat.cpp
SRCS		+=	main.cpp
# ================================================= #

# ================================================= #
INC			=	Animal.hpp WrongAnimal.hpp
INC			+=	WrongCat.hpp Dog.hpp Cat.hpp
# ================================================= #

# ================================================= #
OBJS_DIR	=	obj/
OBJ			=	$(SRCS:%.cpp=%.o)
OBJS		=	$(addprefix $(OBJS_DIR), $(OBJ))
# ================================================= #

# ================================================= #
CXX			=	@g++
CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM			=	@rm -rf
# ================================================= #

# ================================================= #
$(OBJS_DIR)%.o :	$(SRCS_DIR)%.cpp
	@mkdir -p $(OBJS_DIR)
	@echo "\033[0;32mCompiling $<\033[0m"
	$(CXX) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(INC) $(CPPFLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	@echo "\033[0;32mCleaning: $(OBJS_DIR)\033[0m"
	$(RM) $(OBJS_DIR)
	
fclean: clean
	@echo "\033[0;32mCleaning: $(NAME)\033[0m"
	$(RM) $(NAME)

re: fclean all

test: fclean
	@g++ -D VERBOSE=false *.hpp *.cpp -o polymorphism
	@./polymorphism
# ================================================= #

.PHONY: all clean fclean re
