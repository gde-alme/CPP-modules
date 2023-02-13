#include "../include/get_next_line.h"

int	ft_strlen(char *s) {
	int	i = 0;

	if (!s)
		return (0);
	while (s[i] != '\0') {
		i++;
	}
	return (i);
}

int	ft_strchr(char *stack, char needle) {
	int	i = 0;

	while (stack[i] != '\0') {
		if (stack[i] == needle)
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_strdup(char *s) {
	char	*dup = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	int	i = 0;

	while (s[i] != '\0') {
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		len1;
	int		len2;
	char	*str;

	if (s1 && s2)
	{
		len1 = ft_strlen(s1);
		len2 = ft_strlen(s2);
		str = (char*)malloc(sizeof(char) * (len1 + len2 + 1));
		if (str == NULL)
			return (NULL);
		i = -1;
		while (s1[++i])
			str[i] = s1[i];
		i = -1;
		while (s2[++i])
		{
			str[len1] = s2[i];
			len1++;
		}
		str[len1] = '\0';
		return (str);
	}
	return (NULL);
}

char	*ft_substr(char	*s, int len) {
	char	*sub = (char *)malloc(sizeof(char) * (len + 1));
	int	i = 0;

	while (i < len) {
		sub[i] = s[i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

char	*gnl(char **save, int ret) {
	int	len = 0;
	char	*nl, *tmp;

	if (ret == 0 && save[0] == NULL)
		return (NULL);
	while (save[0][len] != '\0' && save[0][len] != '\n') {
		len++;
	}
	if (save[0][len] == '\n') {
		nl = ft_substr(save[0], len + 1);
		tmp = ft_strdup(save[0] + len + 1);
		free(save[0]);
		save[0] = tmp;
		if (save[0][0] == '\0') {free(save[0]); save[0] = NULL;}
	}
	else {
		nl = ft_strdup(save[0]);
		free(save[0]);
		save[0] = NULL;
	}
	return (nl);
}

char	*get_next_line(int fd) {
	char	*tmp;
	char	buffer[BUFFER_SIZE + 1];
	static char *save[42];
	int	ret;

	tmp = NULL;
	if (fd < 0)
		return (NULL);
	while (ret = read(fd, &buffer, BUFFER_SIZE)) {
		buffer[ret] = '\0';
		if (save[0] == NULL)
			save[0] = ft_strdup(buffer);
		else {
			tmp = ft_strjoin(save[0], buffer);
			free(save[0]);
			save[0] = tmp;
		}
		if (ft_strchr(save[0], '\n'))
			break ;
	}
	return (gnl(save, ret));
}
