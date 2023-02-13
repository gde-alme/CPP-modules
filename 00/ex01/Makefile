# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gde-alme <gde-alme@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/26 19:21:31 by gde-alme          #+#    #+#              #
#    Updated: 2023/01/31 11:53:15 by gde-alme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= relevantName

CC	= c++
FLAGS	= -g -Wall -Wextra -Werror -std=c++98

RM	= rm -rf

SRCS	= ${wildcard *.cpp}
HEADER	= Contact.hpp PhoneBook.hpp
TRASH	= ${wildcard *.gch}

.PHONY: all clean fclean re

all:
	g++ ${HEADER} ${SRCS} -o ${NAME}

clean:
	${RM} ${NAME}
fclean: clean
	${RM} ${TRASH}

re: fclean all

test:
	make re; ./relevantName
