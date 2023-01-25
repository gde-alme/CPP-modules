#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void	_mkfile(char *name) {
	int	fd;

	fd = open("Makefile", O_CREAT | O_RDWR, 0666);
	write(fd, "NAME	= ", 7);
	write(fd, name, strlen(name));
	write(fd, "\n\nCC	= c++\nFLAGS	= -Wall -Wextra -Werror -std=c++98\n\nRM	= rm -rf\n\nSRCS	= ${wildcard *.cpp}\n\n.PHONY: all clean fclean re\n\nall:\n	g++ ${SRCS} -o ${NAME}\n\nclean:\n	${RM} ${NAME}\n\nre: clean all\n", 188);
	close(fd);
}

int	main(void) {
	char	*name;

	name = readline("New prog name: ");
	_mkfile(name);
	free(name);
}
