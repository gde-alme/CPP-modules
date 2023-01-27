# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gde-alme <gde-alme@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/26 19:21:51 by gde-alme          #+#    #+#              #
#    Updated: 2023/01/26 19:21:54 by gde-alme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

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
