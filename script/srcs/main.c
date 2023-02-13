//C
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../include/get_next_line.h"

void	_makef(char *name) {
	int	fd;

	fd = open("Makefile", O_CREAT | O_RDWR, 0666);
	write(fd, "NAME	= ", 7);
	write(fd, name, strlen(name));
	write(fd, "\n\nCC\t= c++\nFLAGS\t= -Wall -Wextra -Werror -std=c++98\n\nRM\t= rm -rf\n\nSRCS\t= ${wildcard *.cpp}\n\n.PHONY: all clean fclean re\n\nall:\n	g++ ${SRCS} -o ${NAME}\n\nclean:\n\t${RM} ${NAME}\n\nre: clean all\n", ft_strlen("\n\nCC\t= c++\nFLAGS\t= -Wall -Wextra -Werror -std=c++98\n\nRM\t= rm -rf\n\nSRCS\t= ${wildcard *.cpp}\n\n.PHONY: all clean fclean re\n\nall:\n\tg++ ${SRCS} -o ${NAME}\n\nclean:\n\t${RM} ${NAME}\n\nre: clean all\n"));
	close(fd);
}

void	_whash(int fd, char *name) {
	int	i = 0;
	char	*tmp;

	write(fd, "#ifndef ", 8);
	while (name[i] != '\0') {
		if (name[i] > 96)
			name[i] -= 32;
		else if (name[i] == '.')
			name[i] = '_';
		i++;
	}
	write(fd, name, ft_strlen(name));
	write(fd, "\n#define\t", ft_strlen("\n#define\t"));
	write(fd, name, ft_strlen(name));
	write(fd, "\n\nclass\t", ft_strlen("\n\nclass\t"));
	i = 0;
	while (name[i] != '_') {
		if (i > 0 && name[i] < 97)
			name[i] += 32;
		write(fd, &name[i], 1);
		i++;
	}
	tmp = ft_substr(name, ft_strlen(name) - 4); 
	free(name);
	name = tmp;
	write(fd, " {\n\tprivate:\n\tpublic:\n\t\t", ft_strlen(" {\n\tprivate:\n\tpublic:\n\t\t"));
	write(fd, name, ft_strlen(name));
	write(fd, "();\n\t\t", ft_strlen("();\n\t\t"));
	write(fd, "~", 1);
	write(fd, name, ft_strlen(name));
	write(fd, "();\n};\n\n#endif", ft_strlen("();\n};\n\n#endif"));
}

void	_wconstdest(int fd, char *name) {
	int	i = 0;
	char	*tmp; 

	write(fd, "#include \"", ft_strlen("#include \""));
	name[ft_strlen(name) - 3] = 'h';
	write(fd, name, ft_strlen(name));
	write(fd, "\"\n\n", 3);
	tmp = ft_substr(name, ft_strlen(name) - 4);
	write(fd, tmp, ft_strlen(tmp));
	write(fd, "::", 2);
	write(fd, tmp, ft_strlen(tmp));
	write(fd, "() {\n}\n\n", 8);
	write(fd, tmp, ft_strlen(tmp));
	write(fd, "::~", 3);
	write(fd, tmp, ft_strlen(tmp));
	write(fd, "() {\n}\n", 7);
}

void	_classbuilder(char *name) {
	char	*var_name, *tmp, *var_name2;
	int	fd;

	tmp = ft_substr(name, ft_strlen(name) -  1);
	var_name = ft_strjoin(tmp, ".hpp");
	if (var_name[0] > 96)
		var_name[0] -= 32;
	fd = open(var_name, O_CREAT | O_RDWR, 0666);
	_whash(fd, var_name);
	close(fd);
	var_name2 = ft_strjoin(tmp, ".cpp");
	if (var_name2[0] > 96)
		var_name2[0] -= 32;
	fd = open(var_name2, O_CREAT | O_RDWR, 0666);
	_wconstdest(fd, var_name2);
	free(tmp);
	close(fd);
}

int	_displayMenu() {
	char	*name;

	write(1, "\t\t•~ OPTIONS ~•", ft_strlen("\t\t•~ OPTIONS ~•"));
	write(1, "\n\n\t-> 1 - Create Makefile && One Class", ft_strlen("\n\n\t-> 1 - Create Makefile && One Class"));
	write(1, "\n\t-> 2 - Create N amount of classes\n", ft_strlen("\n\t-> 2 - Create N amount of classes\n"));
	write(1, "\t-> 3/4/5/6/7/8/9 - Exit\n", ft_strlen("\n\t-> 3/4/5/6/7/8/9 - Exit"));
	write(1, ">", 1);
	name = get_next_line(0);
	while (name[0] > 57 || name[0] < 49) {
		free(name);
		write(1, ">", 1);
		name = get_next_line(0);
	}
	return (name[0] - 48);
}

void	initcpp() {
	char	*name;
	int	opt, nb_class, i;
	char	c;

	while (1) {
		opt = _displayMenu();
		if (opt == 1) {
			write(1, "\t\t•~ New prog name ~•\n\n\n>", ft_strlen("\t\t•~ New prog name ~•\n\n\n>"));
			name = get_next_line(0);
			_makef(name);
			free(name);
		}
		else if (opt == 2) {
			i = 0;
			write(1, "\t\t•~ Amount of classes ~•\n\n\n>", ft_strlen("\t\t•~ Amount of classes ~•\n\n\n>"));
			nb_class = atoi(get_next_line(0));
			while (i < nb_class) {
				write(1, "\t\t•~ Class name [", ft_strlen("\t\t•~ Class name ["));
				c = i + 48;
				write(1, &c, 1);
				write(1, "] ~•\n\n\n>", ft_strlen("] ~•\n\n\n>"));
				name = get_next_line(0);
				_classbuilder(name);
				i++;
				free(name);
			}
		}
		else
			return ;
	}
}

int	main(int argc, char **argv) {
	initcpp();
}
