# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gde-alme <gde-alme@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/09 01:03:14 by gde-alme          #+#    #+#              #
#    Updated: 2023/04/12 17:12:47 by gde-alme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ============================================================================ #
NAME	=	btc
# ============================================================================ #

# ============================================================================ #
SRCS_DIR	=	./src/
SRCS		=	BitcoinExchange.cpp
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
	@./$(NAME)

getCSV:
	@echo "\n\t\033[32mDownloading csv from intra\033[0m\n"
	curl -LJO https://projects.intra.42.fr/uploads/document/document/15277/cpp_09.tgz
	@echo "\n\t\033[32mExtracting folder\033[0m\n"
	tar -xf cpp_09.tgz
	mv cpp_09/data.csv ./
	rm -rf cpp_09/ cpp_09.tgz
	@echo "\n\t\033[32mdata.csv cloned\033[0m\n"

# ================================================= #

.PHONY: all clean fclean re
