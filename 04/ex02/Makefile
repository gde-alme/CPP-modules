# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gde-alme <gde-alme@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/09 01:03:14 by gde-alme          #+#    #+#              #
#    Updated: 2023/03/24 15:31:34 by gde-alme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ================================================= #
NAME	=	abstract_class
# ================================================= #

# ================================================= #
SRCS_DIR	=	./src/
SRCS		=	Animal.cpp
SRCS 		+=	Dog.cpp
SRCS 		+=	Cat.cpp
SRCS 		+=	Brain.cpp
SRCS		+=	main.cpp
# ================================================= #

# ================================================= #
INC			=	inc/Animal.hpp
INC			+=	inc/Dog.hpp inc/Cat.hpp
INC 		+=	inc/Brain.hpp
# ================================================= #

# ================================================= #
OBJS_DIR	=	obj/
OBJ			=	$(SRCS:%.cpp=%.o)
OBJS		=	$(addprefix $(OBJS_DIR), $(OBJ))
# ================================================= #

# ================================================= #
CXX			=	@g++
FLAGS		=	-Wall -Wextra -Werror -std=c++98
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
	@g++ -D VERBOSE=false inc/*.hpp src/*.cpp -o $(NAME)
	@./$(NAME)
# ================================================= #

.PHONY: all clean fclean re
