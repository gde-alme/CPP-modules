# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gde-alme <gde-alme@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/24 16:46:47 by gde-alme          #+#    #+#              #
#    Updated: 2023/05/29 17:17:15 by gde-alme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ============================================================================ #
NAME	=	PmergeMe
# ============================================================================ #

# ============================================================================ #
SRCS_DIR	=	./src/
SRCS		=	PmergeMe.cpp
SRCS		+=	main.cpp
# ============================================================================ #

# ============================================================================ #
OBJS_DIR	=	obj/
OBJ		=	$(SRCS:%.cpp=%.o)
OBJS		=	$(addprefix $(OBJS_DIR), $(OBJ))
# ============================================================================ #

# ============================================================================ #
CXX		=	c++
FLAGS		=	-Wall -Wextra -Werror -fsanitize=address -std=c++98
RM		=	rm -rf
# ============================================================================ #

# ============================================================================ #

all: $(NAME)

$(OBJS_DIR)%.o :	$(SRCS_DIR)%.cpp
	@mkdir -p obj/
	$(CXX) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS_DIR)
	
fclean: clean
	$(RM) $(NAME)

re: fclean all

test: fclean
	c++ -D VERBOSE=false src/*.cpp -o $(NAME)
	nums=$$(shuf -i 1-10000 -n 5000 | tr '\n' ' ') ; ./PmergeMe $$nums

# ================================================= #

.PHONY: all clean fclean re
