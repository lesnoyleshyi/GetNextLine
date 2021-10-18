/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stycho <stycho@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:45:45 by stycho            #+#    #+#             */
/*   Updated: 2021/10/18 18:46:07 by stycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#define BUFFER_SIZE 52

char	*get_next_line(int fd)
{
	static char	*last_id;
	char	*buf;
	int		ret;
	char	*cur_line;

	if (!(last_id) || !*last_id)
	{
		buf = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
		if (!buf)
			return (NULL);
		buf[BUFFER_SIZE] = '\0';
		ret = read(fd, buf, BUFFER_SIZE);
		last_id = buf;
//		printf("First if-clause works\n");
	}
	if (ret == 0 || ret == -1 )
	{
		free(buf);
		return (NULL);
	}
	else
	{
//		printf("pointer position before: %s\n", last_id);
		cur_line = ft_return_line(last_id);
//		printf("ft_strlen_n: %lu\n", ft_strlen_n(last_id));
		last_id = last_id + ft_strlen_n(last_id) + 1;
//		printf("pointer position after: %s\n", last_id);
		return (cur_line);
//		printf("pointer position after ft_strlen_n: %s\n", buf);
	}
	return (ft_return_line(last_id));
}
