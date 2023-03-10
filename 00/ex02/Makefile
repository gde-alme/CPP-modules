# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gde-alme <gde-alme@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 17:00:30 by gde-alme          #+#    #+#              #
#    Updated: 2023/03/10 13:46:10 by gde-alme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ================================================= #
NAME		=	excellIsBadForYou
# ================================================= #

# ================================================= #
SRCS_DIR	=	./
SRCS		=	$(wildcard *.cpp)
# ================================================= #

# ================================================= #
INC			=	$(wildcard *.hpp)
# ================================================= #

# ================================================= #
OBJS_DIR	=	obj/
OBJ			=	$(SRCS:%.cpp=%.o)
OBJS		=	$(addprefix $(OBJS_DIR), $(OBJ))
# ================================================= #

# ================================================= #
CXX			=	@c++
FLAGS		=	-Wall -Wextra -Werror -std=c++98
RM			=	@rm -rf
# ================================================= #

# ================================================= #
$(OBJS_DIR)%.o :	$(SRCS_DIR)%.cpp
	@mkdir -p $(OBJS_DIR)
	@echo "\033[0;32mCompiling $<"
	$(CXX) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(INC) $(FLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	@echo "\033[0;32mCleaning: $(OBJS_DIR)"
	$(RM) $(OBJS_DIR)
	
fclean: clean
	@echo "\033[0;32mCleaning: $(NAME)"
	$(RM) $(NAME)

re: fclean all
# ================================================= #

log: re
	@echo "\033[0;32mExecuting with correct timestamp and saving output in my_log.log"
	@./excellIsBadForYou > my_log.log

eval:
	@echo "\033[0;32mExecuting with default timestamp and saving output in my_log.log"
	@g++ -D EVAL=true $(FLAGS) $(INC) $(SRCS) -o excellIsBadForYou
	@./excellIsBadForYou > my_log.log

.PHONY: all clean fclean re log