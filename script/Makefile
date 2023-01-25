NAME	= tamos

CC	= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98

RM	= rm -rf

SRCS	= ${wildcard *.cpp}

.PHONY: all clean fclean re

all:
	g++ ${SRCS} -o ${NAME}

clean:
	${RM} ${NAME}

re: clean all
