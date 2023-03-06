NAME    = ExcellIsBad

CC      = c++
FLAGS   = -g -Wall -Wextra -Werror -std=c++98

RM      = rm -rf

SRCS    = ${wildcard *.cpp}
HEADER  = Account.hpp
TRASH   = ${wildcard *.gch}

.PHONY: all clean fclean re

all:
        g++ ${HEADER} ${SRCS} -o ${NAME}

clean:
        ${RM} ${NAME}
fclean: clean
        ${RM} ${TRASH}

re: fclean all

test:
        make re; ./ExcellIsBad