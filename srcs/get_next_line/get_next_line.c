/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:07:29 by nshahid           #+#    #+#             */
/*   Updated: 2023/09/19 10:18:14 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	find_next_line_break(char *str, size_t i)
{
	char	*ptr;

	ptr = str + i;
	while (*ptr && *ptr != '\n')
		ptr++;
	if (*ptr == '\n')
		ptr++;
	return (ptr - str);
}

static char	*create_substring(char *str)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*str)
		return (free(str), NULL);
	i = find_next_line_break(str, i);
	new_str = (char *)malloc((ft_strlen(str) - i) + 1);
	if (!new_str)
		return (free(new_str), NULL);
	while (*(str + i))
		*(new_str + j++) = *(str + i++);
	*(new_str + j) = '\0';
	if (!*new_str)
		return (free(str), free(new_str), NULL);
	free(str);
	return (new_str);
}

static char	*read_line(char *str)
{
	char	*line;
	size_t	i;

	i = 0;
	if (!str || *str == '\0')
		return (NULL);
	i = find_next_line_break(str, i);
	line = (char *)malloc(sizeof(char) * i + 1);
	if (!line)
		return (NULL);
	i = 0;
	while (*(str + i) && *(str + i) != '\n')
	{
		*(line + i) = *(str + i);
		i++;
	}
	if (*(str + i) == '\n')
	{
		*(line + i) = *(str + i);
		i++;
	}
	*(line + i) = '\0';
	return (line);
}

static char	*free_null(char *buff1, char *buff2)
{
	free(buff1);
	free(buff2);
	buff2 = NULL;
	return (buff2);
}

char	*get_next_line(int fd)
{
	char		*read_content;
	int			read_bytes;
	static char	*read_buffer[MAX_FD];

	read_bytes = 1;
	if (fd < 0 || fd > MAX_FD || BUFFER_SIZE <= 0 || BUFFER_SIZE > INT_MAX)
		return (NULL);
	read_content = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!read_content)
		return (NULL);
	while (!ft_gnl_strchr(*(read_buffer + fd), '\n') && read_bytes != 0)
	{
		read_bytes = read(fd, read_content, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			*(read_buffer + fd) = free_null(read_content, *(read_buffer + fd));
			return (NULL);
		}
		read_content[read_bytes] = '\0';
		read_buffer[fd] = ft_gnl_strjoin(*(read_buffer + fd), read_content);
	}
	free(read_content);
	read_content = read_line(read_buffer[fd]);
	read_buffer[fd] = create_substring(read_buffer[fd]);
	return (read_content);
}
