# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gde-alme <gde-alme@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 17:00:30 by gde-alme          #+#    #+#              #
#    Updated: 2023/03/07 17:00:31 by gde-alme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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
fclean:	clean
	${RM} ${TRASH}

re: fclean all

test:
	make re; ./ExcellIsBad
