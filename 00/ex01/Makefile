# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gde-alme <gde-alme@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/26 19:21:31 by gde-alme          #+#    #+#              #
#    Updated: 2023/01/28 17:54:33 by gde-alme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= relevantName

CC	= c++
FLAGS	= -g -Wall -Wextra -Werror -std=c++98

RM	= rm -rf

SRCS	= ${wildcard *.cpp}
HEADER	= contact.hpp phonebook.hpp
TRASH	= ${wildcard *.gch}

.PHONY: all clean fclean re

all:
	g++ ${HEADER} ${SRCS} -o ${NAME}

clean:
	${RM} ${NAME}
fclean: clean
	${RM} ${TRASH}

re: fclean all
