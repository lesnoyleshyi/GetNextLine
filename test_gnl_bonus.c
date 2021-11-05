#include <stdio.h>
#include "get_next_line_bonus.h"

int	main(int argc, char **argv)
{
	int	fd, fd1, fd2, fd3, fd4, fd5, fd6, fd7, fd8, fd9, fd10, fd11, fd12, fd13, fd14;
	argc = 0;
	char	*line;

	if (argv[1])
	{
		fd = 1;

		line = get_next_line(fd);
		printf("stdin_L1:%s ", line);
		free(line);

		line = get_next_line(fd);
		printf("stdin_L2:%s ", line);
		free(line);

		line = get_next_line(fd);
		printf("stdin_L3:%s ", line);
		free(line);

		line = get_next_line(fd);
		printf("stdin_L4:%s ", line);
		free(line);

		line = get_next_line(fd);
		printf("stdin_L5:%s ", line);
		free(line);

		line = get_next_line(fd);
		printf("stdin_L6:%s ", line);
		free(line);

		line = get_next_line(fd);
		printf("stdin_L7:%s ", line);
		free(line);

		line = get_next_line(fd);
		printf("stdin_L8:%s ", line);
		free(line);

		line = get_next_line(fd);
		printf("stdin_L9:%s ", line);
		free(line);

		line = get_next_line(fd);
		printf("stdin_L10:%s ", line);
		free(line);

		return (0);
	}
	else
	{
		fd = open("./testfiles/41_no_nl", O_RDONLY);
		if (fd == -1)
		{
			printf("File hasn't been read\n");
			return (1);
		}
		fd1 = open("./testfiles/41_with_nl", O_RDONLY);
		if (fd1 == -1)
		{
			printf("File1 hasn't been read\n");
			return (1);
		}
		fd2 = open("./testfiles/42_no_nl", O_RDONLY);
		if (fd2 == -1)
		{
			printf("File2 hasn't been read\n");
			return (1);
		}
		fd3 = open("./testfiles/42_with_nl", O_RDONLY);
		if (fd3 == -1)
		{
			printf("File3 hasn't been read\n");
			return (1);
		}
		fd4 = open("./testfiles/43_no_nl", O_RDONLY);
		if (fd4 == -1)
		{
			printf("File4 hasn't been read\n");
			return (1);
		}
		fd5 = open("./testfiles/43_with_nl", O_RDONLY);
		if (fd5 == -1)
		{
			printf("File5 hasn't been read\n");
			return (1);
		}
		fd6 = open("./testfiles/alternate_line_nl_no_nl", O_RDONLY);
		if (fd6 == -1)
		{
			printf("File6 hasn't been read\n");
			return (1);
		}
		fd7 = open("./testfiles/alternate_line_nl_with_nl", O_RDONLY);
		if (fd7 == -1)
		{
			printf("File7 hasn't been read\n");
			return (1);
		}
		fd8 = open("./testfiles/big_line_no_nl", O_RDONLY);
		if (fd8 == -1)
		{
			printf("File8 hasn't been read\n");
			return (1);
		}
		fd9 = open("./testfiles/big_line_with_nl", O_RDONLY);
		if (fd9 == -1)
		{
			printf("File9 hasn't been read\n");
			return (1);
		}
		fd10 = open("./testfiles/multiple_line_no_nl", O_RDONLY);
		if (fd10 == -1)
		{
			printf("File10 hasn't been read\n");
			return (1);
		}
		fd11 = open("./testfiles/multiple_line_with_nl", O_RDONLY);
		if (fd11 == -1)
		{
			printf("File11 hasn't been read\n");
			return (1);
		}
		fd12 = open("./testfiles/multiple_nlx5", O_RDONLY);
		if (fd12 == -1)
		{
			printf("File12 hasn't been read\n");
			return (1);
		}
		fd13 = open("./testfiles/nl", O_RDONLY);
		if (fd13 == -1)
		{
			printf("File13 hasn't been read\n");
			return (1);
		}
		fd14 = open("./testfiles/empty", O_RDONLY);
		if (fd14 == -1)
		{
			printf("File14 hasn't been read\n");
			return (1);
		}

	}

	line = get_next_line(fd);
	printf("41_no_nl_L1:%s ", line);
	free(line);
	line = get_next_line(fd1);
	printf("41_with_nl_L1:%s ", line);
	free(line);
	line = get_next_line(fd2);
	printf("42_no_nl_L1:%s ", line);
	free(line);
	line = get_next_line(fd3);
	printf("42_with_nl_L1:%s ", line);
	free(line);
	line = get_next_line(fd4);
	printf("43_no_nl_L1:%s ", line);
	free(line);
	line = get_next_line(fd5);
	printf("43_with_nl_L1:%s ", line);
	free(line);
	line = get_next_line(fd6);
	printf("alt_line_nl_no_nl_L1:%s ", line);
	free(line);
	line = get_next_line(fd7);
	printf("alt_line_nl_with_nl_L1:%s ", line);
	free(line);
	line = get_next_line(fd8);
	printf("big_line_no_nl_L1:%s ", line);
	free(line);
	line = get_next_line(fd9);
	printf("big_line_with_nl_L1:%s ", line);
	free(line);
	line = get_next_line(fd10);
	printf("mult_line_no_nl_L1:%s ", line);
	free(line);
	line = get_next_line(fd11);
	printf("mult_line_with_nl_L1:%s ", line);
	free(line);
	line = get_next_line(fd12);
	printf("mult_nlx5_L1:%s ", line);
	free(line);
	line = get_next_line(fd13);
	printf("nl_L1:%s ", line);
	free(line);
	line = get_next_line(fd14);
	printf("empty_L1:%s ", line);
	free(line);

	printf("\n^1------------------\n");

	line = get_next_line(fd);
	printf("41_no_nl_L2:%s ", line);
	free(line);
	line = get_next_line(fd1);
	printf("41_with_nl_L2:%s ", line);
	free(line);
	line = get_next_line(fd2);
	printf("42_no_nl_L2:%s ", line);
	free(line);
	line = get_next_line(fd3);
	printf("42_with_nl_L2:%s ", line);
	free(line);
	line = get_next_line(fd4);
	printf("43_no_nl_L2:%s ", line);
	free(line);
	line = get_next_line(fd5);
	printf("43_with_nl_L2:%s ", line);
	free(line);
	line = get_next_line(fd6);
	printf("alt_line_nl_no_nl_L2:%s ", line);
	free(line);
	line = get_next_line(fd7);
	printf("alt_line_nl_with_nl_L2:%s ", line);
	free(line);
	line = get_next_line(fd8);
	printf("big_line_no_nl_L2:%s ", line);
	free(line);
	line = get_next_line(fd9);
	printf("big_line_with_nl_L2:%s ", line);
	free(line);
	line = get_next_line(fd10);
	printf("mult_line_no_nl_L2:%s ", line);
	free(line);
	line = get_next_line(fd11);
	printf("mult_line_with_nl_L2:%s ", line);
	free(line);
	line = get_next_line(fd12);
	printf("mult_nlx5_L2:%s ", line);
	free(line);
	line = get_next_line(fd13);
	printf("nl_L2:%s ", line);
	free(line);
	line = get_next_line(fd14);
	printf("empty_L21:%s ", line);
	free(line);

	printf("\n^2------------------\n");

	line = get_next_line(fd);
	printf("41_no_nl_L3:%s ", line);
	free(line);
	line = get_next_line(fd1);
	printf("41_with_nl_L3:%s ", line);
	free(line);
	line = get_next_line(fd2);
	printf("42_no_nl_L3:%s ", line);
	free(line);
	line = get_next_line(fd3);
	printf("42_with_nl_L3:%s ", line);
	free(line);
	line = get_next_line(fd4);
	printf("43_no_nl_L3:%s ", line);
	free(line);
	line = get_next_line(fd5);
	printf("43_with_nl_L3:%s ", line);
	free(line);
	line = get_next_line(fd6);
	printf("alt_line_nl_no_nl_L3:%s ", line);
	free(line);
	line = get_next_line(fd7);
	printf("alt_line_nl_with_nl_L3:%s ", line);
	free(line);
	line = get_next_line(fd8);
	printf("big_line_no_nl_L3:%s ", line);
	free(line);
	line = get_next_line(fd9);
	printf("big_line_with_nl_L3:%s ", line);
	free(line);
	line = get_next_line(fd10);
	printf("mult_line_no_nl_L3:%s ", line);
	free(line);
	line = get_next_line(fd11);
	printf("mult_line_with_nl_L3:%s ", line);
	free(line);
	line = get_next_line(fd12);
	printf("mult_nlx5_L3:%s ", line);
	free(line);
	line = get_next_line(fd13);
	printf("nl_L3:%s ", line);
	free(line);
	line = get_next_line(fd14);
	printf("empty_L3:%s ", line);
	free(line);

	printf("\n^3------------------\n");

	line = get_next_line(fd);
	printf("41_no_nl_L4:%s ", line);
	free(line);
	line = get_next_line(fd1);
	printf("41_with_nl_L4:%s ", line);
	free(line);
	line = get_next_line(fd2);
	printf("42_no_nl_L4:%s ", line);
	free(line);
	line = get_next_line(fd3);
	printf("42_with_nl_L4:%s ", line);
	free(line);
	line = get_next_line(fd4);
	printf("43_no_nl_L4:%s ", line);
	free(line);
	line = get_next_line(fd5);
	printf("43_with_nl_L4:%s ", line);
	free(line);
	line = get_next_line(fd6);
	printf("alt_line_nl_no_nl_L4:%s ", line);
	free(line);
	line = get_next_line(fd7);
	printf("alt_line_nl_with_nl_L4:%s ", line);
	free(line);
	line = get_next_line(fd8);
	printf("big_line_no_nl_L4:%s ", line);
	free(line);
	line = get_next_line(fd9);
	printf("big_line_with_nl_L4:%s ", line);
	free(line);
	line = get_next_line(fd10);
	printf("mult_line_no_nl_L4:%s ", line);
	free(line);
	line = get_next_line(fd11);
	printf("mult_line_with_nl_L4:%s ", line);
	free(line);
	line = get_next_line(fd12);
	printf("mult_nlx5_L4:%s ", line);
	free(line);
	line = get_next_line(fd13);
	printf("nl_L4:%s ", line);
	free(line);
	line = get_next_line(fd14);
	printf("empty_L4:%s ", line);
	free(line);

	printf("\n^4------------------\n");

	line = get_next_line(fd);
	printf("41_no_nl_L5:%s ", line);
	free(line);
	line = get_next_line(fd1);
	printf("41_with_nl_L5:%s ", line);
	free(line);
	line = get_next_line(fd2);
	printf("42_no_nl_L5:%s ", line);
	free(line);
	line = get_next_line(fd3);
	printf("42_with_nl_L5:%s ", line);
	free(line);
	line = get_next_line(fd4);
	printf("43_no_nl_L5:%s ", line);
	free(line);
	line = get_next_line(fd5);
	printf("43_with_nl_L5:%s ", line);
	free(line);
	line = get_next_line(fd6);
	printf("alt_line_nl_no_nl_L5:%s ", line);
	free(line);
	line = get_next_line(fd7);
	printf("alt_line_nl_with_nl_L5:%s ", line);
	free(line);
	line = get_next_line(fd8);
	printf("big_line_no_nl_L5:%s ", line);
	free(line);
	line = get_next_line(fd9);
	printf("big_line_with_nl_L5:%s ", line);
	free(line);
	line = get_next_line(fd10);
	printf("mult_line_no_nl_L5:%s ", line);
	free(line);
	line = get_next_line(fd11);
	printf("mult_line_with_nl_L5:%s ", line);
	free(line);
	line = get_next_line(fd12);
	printf("mult_nlx5_L5:%s ", line);
	free(line);
	line = get_next_line(fd13);
	printf("nl_L5:%s ", line);
	free(line);
	line = get_next_line(fd14);
	printf("empty_L5:%s ", line);
	free(line);

	printf("\n^5------------------\n");

	line = get_next_line(fd);
	printf("41_no_nl_L6:%s ", line);
	free(line);
	line = get_next_line(fd1);
	printf("41_with_nl_L6:%s ", line);
	free(line);
	line = get_next_line(fd2);
	printf("42_no_nl_L6:%s ", line);
	free(line);
	line = get_next_line(fd3);
	printf("42_with_nl_L6:%s ", line);
	free(line);
	line = get_next_line(fd4);
	printf("43_no_nl_L6:%s ", line);
	free(line);
	line = get_next_line(fd5);
	printf("43_with_nl_L6:%s ", line);
	free(line);
	line = get_next_line(fd6);
	printf("alt_line_nl_no_nl_L6:%s ", line);
	free(line);
	line = get_next_line(fd7);
	printf("alt_line_nl_with_nl_L6:%s ", line);
	free(line);
	line = get_next_line(fd8);
	printf("big_line_no_nl_L6:%s ", line);
	free(line);
	line = get_next_line(fd9);
	printf("big_line_with_nl_L6:%s ", line);
	free(line);
	line = get_next_line(fd10);
	printf("mult_line_no_nl_L6:%s ", line);
	free(line);
	line = get_next_line(fd11);
	printf("mult_line_with_nl_L6:%s ", line);
	free(line);
	line = get_next_line(fd12);
	printf("mult_nlx5_L6:%s ", line);
	free(line);
	line = get_next_line(fd13);
	printf("nl_L6:%s ", line);
	free(line);
	line = get_next_line(fd14);
	printf("empty_L6:%s ", line);
	free(line);

	printf("\n^6------------------\n");

	line = get_next_line(fd);
	printf("41_no_nl_L7:%s ", line);
	free(line);
	line = get_next_line(fd1);
	printf("41_with_nl_L7:%s ", line);
	free(line);
	line = get_next_line(fd2);
	printf("42_no_nl_L7:%s ", line);
	free(line);
	line = get_next_line(fd3);
	printf("42_with_nl_L7:%s ", line);
	free(line);
	line = get_next_line(fd4);
	printf("43_no_nl_L7:%s ", line);
	free(line);
	line = get_next_line(fd5);
	printf("43_with_nl_L7:%s ", line);
	free(line);
	line = get_next_line(fd6);
	printf("alt_line_nl_no_nl_L7:%s ", line);
	free(line);
	line = get_next_line(fd7);
	printf("alt_line_nl_with_nl_L7:%s ", line);
	free(line);
	line = get_next_line(fd8);
	printf("big_line_no_nl_L7:%s ", line);
	free(line);
	line = get_next_line(fd9);
	printf("big_line_with_nl_L7:%s ", line);
	free(line);
	line = get_next_line(fd10);
	printf("mult_line_no_nl_L7:%s ", line);
	free(line);
	line = get_next_line(fd11);
	printf("mult_line_with_nl_L7:%s ", line);
	free(line);
	line = get_next_line(fd12);
	printf("mult_nlx5_L7:%s ", line);
	free(line);
	line = get_next_line(fd13);
	printf("nl_L7:%s ", line);
	free(line);
	line = get_next_line(fd14);
	printf("empty_L7:%s ", line);
	free(line);

	printf("\n^7------------------\n");

	line = get_next_line(fd);
	printf("41_no_nl_L8:%s ", line);
	free(line);
	line = get_next_line(fd1);
	printf("41_with_nl_L8:%s ", line);
	free(line);
	line = get_next_line(fd2);
	printf("42_no_nl_L8:%s ", line);
	free(line);
	line = get_next_line(fd3);
	printf("42_with_nl_L8:%s ", line);
	free(line);
	line = get_next_line(fd4);
	printf("43_no_nl_L8:%s ", line);
	free(line);
	line = get_next_line(fd5);
	printf("43_with_nl_L8:%s ", line);
	free(line);
	line = get_next_line(fd6);
	printf("alt_line_nl_no_nl_L8:%s ", line);
	free(line);
	line = get_next_line(fd7);
	printf("alt_line_nl_with_nl_L8:%s ", line);
	free(line);
	line = get_next_line(fd8);
	printf("big_line_no_nl_L8:%s ", line);
	free(line);
	line = get_next_line(fd9);
	printf("big_line_with_nl_L8:%s ", line);
	free(line);
	line = get_next_line(fd10);
	printf("mult_line_no_nl_L8:%s ", line);
	free(line);
	line = get_next_line(fd11);
	printf("mult_line_with_nl_L8:%s ", line);
	free(line);
	line = get_next_line(fd12);
	printf("mult_nlx5_L8:%s ", line);
	free(line);
	line = get_next_line(fd13);
	printf("nl_L8:%s ", line);
	free(line);
	line = get_next_line(fd14);
	printf("empty_L8:%s ", line);
	free(line);

	printf("\n^8------------------\n");

	line = get_next_line(fd);
	printf("41_no_nl_L9:%s ", line);
	free(line);
	line = get_next_line(fd1);
	printf("41_with_nl_L9:%s ", line);
	free(line);
	line = get_next_line(fd2);
	printf("42_no_nl_L9:%s ", line);
	free(line);
	line = get_next_line(fd3);
	printf("42_with_nl_L9:%s ", line);
	free(line);
	line = get_next_line(fd4);
	printf("43_no_nl_L9:%s ", line);
	free(line);
	line = get_next_line(fd5);
	printf("43_with_nl_L9:%s ", line);
	free(line);
	line = get_next_line(fd6);
	printf("alt_line_nl_no_nl_L9:%s ", line);
	free(line);
	line = get_next_line(fd7);
	printf("alt_line_nl_with_nl_L9:%s ", line);
	free(line);
	line = get_next_line(fd8);
	printf("big_line_no_nl_L9:%s ", line);
	free(line);
	line = get_next_line(fd9);
	printf("big_line_with_nl_L9:%s ", line);
	free(line);
	line = get_next_line(fd10);
	printf("mult_line_no_nl_L9:%s ", line);
	free(line);
	line = get_next_line(fd11);
	printf("mult_line_with_nl_L9:%s ", line);
	free(line);
	line = get_next_line(fd12);
	printf("mult_nlx5_L9:%s ", line);
	free(line);
	line = get_next_line(fd13);
	printf("nl_L9:%s ", line);
	free(line);
	line = get_next_line(fd14);
	printf("empty_L9:%s ", line);
	free(line);

	printf("\n^9------------------\n");


	line = get_next_line(fd);
	printf("41_no_nl_L10:%s ", line);
	free(line);
	line = get_next_line(fd1);
	printf("41_with_nl_L10:%s ", line);
	free(line);
	line = get_next_line(fd2);
	printf("42_no_nl_L10:%s ", line);
	free(line);
	line = get_next_line(fd3);
	printf("42_with_nl_L10:%s ", line);
	free(line);
	line = get_next_line(fd4);
	printf("43_no_nl_L10:%s ", line);
	free(line);
	line = get_next_line(fd5);
	printf("43_with_nl_L10:%s ", line);
	free(line);
	line = get_next_line(fd6);
	printf("alt_line_nl_no_nl_L10:%s ", line);
	free(line);
	line = get_next_line(fd7);
	printf("alt_line_nl_with_nl_L10:%s ", line);
	free(line);
	line = get_next_line(fd8);
	printf("big_line_no_nl_L10:%s ", line);
	free(line);
	line = get_next_line(fd9);
	printf("big_line_with_nl_L10:%s ", line);
	free(line);
	line = get_next_line(fd10);
	printf("mult_line_no_nl_L10:%s ", line);
	free(line);
	line = get_next_line(fd11);
	printf("mult_line_with_nl_L10:%s ", line);
	free(line);
	line = get_next_line(fd12);
	printf("mult_nlx5_L10:%s ", line);
	free(line);
	line = get_next_line(fd13);
	printf("nl_L10:%s ", line);
	free(line);
	line = get_next_line(fd14);
	printf("empty_L10:%s ", line);
	free(line);

	printf("\n^10------------------\n");

	line = get_next_line(fd);
	printf("41_no_nl_L11:%s ", line);
	free(line);
	line = get_next_line(fd1);
	printf("41_with_nl_L11:%s ", line);
	free(line);
	line = get_next_line(fd2);
	printf("42_no_nl_L11:%s ", line);
	free(line);
	line = get_next_line(fd3);
	printf("42_with_nl_L11:%s ", line);
	free(line);
	line = get_next_line(fd4);
	printf("43_no_nl_L11:%s ", line);
	free(line);
	line = get_next_line(fd5);
	printf("43_with_nl_L11:%s ", line);
	free(line);
	line = get_next_line(fd6);
	printf("alt_line_nl_no_nl_L11:%s ", line);
	free(line);
	line = get_next_line(fd7);
	printf("alt_line_nl_with_nl_L11:%s ", line);
	free(line);
	line = get_next_line(fd8);
	printf("big_line_no_nl_L11:%s ", line);
	free(line);
	line = get_next_line(fd9);
	printf("big_line_with_nl_L11:%s ", line);
	free(line);
	line = get_next_line(fd10);
	printf("mult_line_no_nl_L11:%s ", line);
	free(line);
	line = get_next_line(fd11);
	printf("mult_line_with_nl_L11:%s ", line);
	free(line);
	line = get_next_line(fd12);
	printf("mult_nlx5_L11:%s ", line);
	free(line);
	line = get_next_line(fd13);
	printf("nl_L11:%s ", line);
	free(line);
	line = get_next_line(fd14);
	printf("empty_L11:%s ", line);
	free(line);

	printf("\n^11------------------\n");

	return (0);
}