NAME	= moarBrainz

CC	= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98

RM	= rm -rf

SRCS	= ${wildcard *.cpp}
HEADER	= Zombie.hpp

.PHONY: all clean fclean re

all:
	g++ ${SRCS} -o ${NAME}

clean:
	${RM} ${NAME}

re: clean all
