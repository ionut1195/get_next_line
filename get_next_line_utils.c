/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itomescu <itomescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 14:49:52 by itomescu          #+#    #+#             */
/*   Updated: 2021/08/23 13:23:45 by itomescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	if (!s)
		return (0);
	while (s[length] != '\0')
		length++;
	return (length);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	itr;

	if (!dst)
		return (0);
	if (!size)
		return (ft_strlen(src));
	itr = 0;
	while ((itr < size - 1) && src[itr])
	{
		dst[itr] = src[itr];
		itr++;
	}
	dst[itr] = '\0';
	return (ft_strlen(src));
}

void	get_index(char *line, int *index)
{
	while (line[*index] && line[*index] != '\n')
		(*index)++;
	if (line[*index] == '\n')
		(*index)++;
}

int	check_and_free(int *reading, char *buf)
{
	if (*reading == -1)
	{
		free(buf);
		return (1);
	}
	return (0);
}
