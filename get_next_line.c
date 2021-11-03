#include "get_next_line.h"
#define BUFFER_SIZE 5

char	*get_next_line(int fd)
{
	static char	*remainder;
	char		*line;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	remainder = ft_upd_buf(remainder, fd, BUFFER_SIZE);
	if (!remainder)
		return (NULL);
	line = ft_bite_line(&remainder);
	return (line);
}
