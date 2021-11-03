#include <stdio.h>
#include "get_next_line.h"

int	main(int argc, char **argv)
{
	int	fd;
	argc = 0;
	char	*line;

	if (argv[1])
	{
		fd = 1;
	}
	else
	{
		fd = open("./testfile.txt", O_RDONLY);
		if (fd == -1)
			return (1);
	}
	line = get_next_line(fd);
	printf("-------string: %s\n", line);
	line = get_next_line(fd);
	printf("-------string: %s\n", line);
	line = get_next_line(fd);
	printf("-------string: %s\n", line);
	line = get_next_line(fd);
	printf("-------string: %s\n", line);
	line = get_next_line(fd);
	printf("-------string: %s\n", line);
	line = get_next_line(fd);
	printf("-------string: %s\n", line);
	line = get_next_line(fd);
	printf("-------string: %s\n", line);
	line = get_next_line(fd);
	printf("-------string: %s\n", line);
	line = get_next_line(fd);
	printf("-------string: %s\n", line);
	line = get_next_line(fd);
	printf("-------string: %s\n", line);
	line = get_next_line(fd);
	printf("-------string: %s\n", line);
	line = get_next_line(fd);
	printf("-------string: %s\n", line);
	line = get_next_line(fd);
	printf("-------string: %s\n", line);

	free(line);
	return (0);
}