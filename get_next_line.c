#include "get_next_line.h"
//#define BUFFER_SIZE 10000000

char	*get_next_line(int fd)
{
	static char	*remainder;
	char		*line;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	remainder = ft_upd_buf(remainder, fd, BUFFER_SIZE);
	if (!remainder)
		return (NULL);
	line = ft_get_line(remainder);
	remainder = ft_remove_line(remainder);
	return (line);
}
