#include <printf.h>
#include "get_next_line.h"

char	*ft_upd_buf(char *buf, int fd, size_t buf_size)
{
	ssize_t ret;
	char temp_buf[buf_size + 1];
//	char *temp_buf;
	char *dummy_pointer;

	ret = 1;
	while (!ft_is_nl_here(buf) && ret > 0)
	{
//		temp_buf = (char *) malloc(buf_size + 1);
		ret = read(fd, temp_buf, buf_size);
		if (ret <= 0)
		{
//			free(temp_buf);
			break ;
		}
		temp_buf[ret] = '\0';
		dummy_pointer = ft_strjoin(buf, temp_buf);
//		free(temp_buf);
		free(buf);
		buf = dummy_pointer;
	}
	return (buf);
}

char	*ft_get_line(char *str)
{
	size_t	line_len;
	char	*line;
	int		i;

	line_len = 0;
	if (str[line_len] == '\0')
		return (NULL);
	while (str[line_len] != '\n')
	{
		if (str[line_len] == '\0')
			return (ft_strjoin("", str)); // Проверить
		line_len++;
	}
	line = (char *)malloc(line_len + 2);
	if (!line)
		return (NULL);
	i = 0;
	while (str[i] != '\n')
	{
		line[i] = str[i];
		i++;
	}
	line[i] = '\n';
	line[++i] = '\0';
	return (line);
}

char	*ft_remove_line(char *str)
{
	size_t	i;
	size_t	j;
	char	*new_remainder;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		i++;
	if (!str[i])
	{
		free(str);
		return (NULL);
	}
	new_remainder = (char *)malloc(ft_strlen(str + i) + 1);
	if (!new_remainder)
		return (NULL);
	j = 0;
	while (str[i] != '\0')
		new_remainder[j++] = str[i++];
	new_remainder[j] = '\0';
	free(str);
	return (new_remainder);
}

int	ft_is_nl_here(char *str)
{
	int i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *str1, char *str2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*res;
	char	*res_start;

	len_s1 = 0;
	if (str1 != NULL)
		len_s1 = ft_strlen(str1);
	len_s2 = ft_strlen(str2);
	res = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (!res)
		return(NULL);
	res_start = res;
	while (len_s1--)
		*res++ = *str1++;
	while (len_s2--)
		*res++ = *str2++;
	*res = '\0';
	return (res_start);
}
