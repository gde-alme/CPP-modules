# ============================================================================ #
NAME	=	cpp
# ============================================================================ #

# ============================================================================ #
SRCS_DIR	=	./src/
SRCS		=	createClass.cpp
SRCS		+=	initEnv.cpp
SRCS		+=	main.cpp
# ============================================================================ #

# ============================================================================ #
OBJS_DIR	=	obj/
OBJ		=	$(SRCS:%.cpp=%.o)
OBJS		=	$(addprefix $(OBJS_DIR), $(OBJ))
# ============================================================================ #

# ============================================================================ #
CXX		=	c++
FLAGS		=	#-Wall -Wextra -Werror #-fsanitize=address #-std=c++98
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

# ================================================= #

.PHONY: all clean fclean re