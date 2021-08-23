/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itomescu <itomescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 10:46:05 by itomescu          #+#    #+#             */
/*   Updated: 2021/08/23 13:52:17 by itomescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

int		has_newline(char *line);
int		check_and_free(int *reading, char *buf);
char	*get_rtn(char *line);
char	*get_remainder(char *line);
char	*ft_strjoin(char const *s1, char const *s2);
char	*get_next_line(int fd);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);
void	get_index(char *line, int *index);

#endif