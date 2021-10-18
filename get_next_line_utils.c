/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stycho <stycho@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 21:43:06 by stycho            #+#    #+#             */
/*   Updated: 2021/10/18 21:43:08 by stycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>


size_t	ft_strlen_n(char *str)
{
	size_t	len;

	len = 0;
	while (*str && *str != '\n')
	{
		len++;
		str++;
	}
	return (len);
}

void	ft_strcpy_n(char *dst, char *src)
{
	while (*src && *src != '\n')
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
}

char	*ft_return_line(char *pos_in_buf)
{
	char	*p_to_line;
	size_t	line_len;

	line_len = ft_strlen_n(pos_in_buf);
	p_to_line = (char *)malloc((line_len + 1) * sizeof(char));
	if (!p_to_line)
		return (NULL);
	ft_strcpy_n(p_to_line, pos_in_buf);
//	last_id = pos_in_buf + line_len;
//	printf("i'm inside ft_return_line: %s\n", p_to_line);
	return (p_to_line);
}
