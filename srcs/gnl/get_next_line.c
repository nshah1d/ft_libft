/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:07:29 by nshahid           #+#    #+#             */
/*   Updated: 2023/09/20 09:08:14 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The `find_next_line_break` function searches for the next occurrence of
** a newline character ('\n') in the string 'str' starting from the position
** 'i'.
**
** Parameters:
** str - The string to search within.
** i - The starting index from which to search.
**
** Return:
** The function returns the index of the next newline character found in 'str'
** after position 'i'.
** If no newline character is found, it returns the length of the string.
**
** Description:
** The `find_next_line_break` function starts searching for a newline character
** from the position 'i' within the string 'str'. If it finds a newline
** character, it returns the index of that character. If no newline character
** is found, it returns the length of the string. This function can be used
** to locate line breaks in a string.
**
** Example:
** char *str = "Hello\nWorld!";
** size_t result = find_next_line_break(str, 0);
** Returns 5 (position of '\n')
** size_t result2 = find_next_line_break(str, 6);
** Returns 12 (position of '\0')
*/

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

/*
** The `create_substring` function creates a new string that contains the
** substring of 'str' starting from the first newline character ('\n') found
** up to the end of the string.
**
** Parameters:
** str - The input string.
**
** Return:
** If memory allocation fails or if 'str' is NULL, the function returns NULL.
** Otherwise, it returns a newly allocated string containing the desired
** substring.
**
** Description:
** The `create_substring` function first checks if 'str' is an empty string or
** NULL. If so, it frees the memory occupied by 'str' and returns NULL. It
** then finds the position of the first newline character ('\n') in 'str' and
** allocates memory for a new string to hold the substring after this position.
** The characters from 'str' are then copied into the new string. Finally, it
** frees the original 'str' and returns the new substring.
**
** Example:
** char *str = "Hello\nWorld!";
** char *result = create_substring(str);
** Returns "World!"
*/

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

/*
** The `read_line` function extracts a line from the input string 'str' and
** returns it as a new string.
**
** Parameters:
** str - The input string containing one or more lines of text.
**
** Return:
** If memory allocation fails or if 'str' is NULL or empty, the function
** returns NULL. Otherwise, it returns a newly allocated string containing
** the extracted line (including the newline character, if present).
**
** Description:
** The `read_line` function first checks if 'str' is NULL or empty. If so,
** it returns NULL. It then calculates the length of the line, including any
** newline character ('\n'), and allocates memory for a new string to hold
** the line. It copies the characters from 'str' into the new string until it
** encounters a newline character or the end of 'str'. If a newline character
** is encountered, it is also copied into the new string. Finally, the new
** string is null-terminated and returned.
**
** Example:
** char *str = "Hello\nWorld!";
** char *line = read_line(str);
** Returns "Hello\n"
*/

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

/*
** The `free_null` function releases the memory allocated for two strings
** 'buff1' and 'buff2' and sets 'buff2' to NULL.
**
** Parameters:
** buff1 - The first string to be freed.
** buff2 - The second string to be freed and set to NULL.
**
** Return:
** The function returns the modified 'buff2' with a NULL value.
**
** Description:
** The `free_null` function is a utility function that takes two string
** pointers 'buff1' and 'buff2' as input. It first frees the memory occupied
** by 'buff1' and 'buff2' using the `free` function to prevent memory leaks.
** Then, it sets 'buff2' to NULL to indicate that it no longer points to
** valid memory. This function is useful for cleaning up memory after
** dynamically allocated strings.
**
** Example:
** char *str1 = "Hello";
** char *str2 = "World";
** str2 = free_null(str1, str2);
** str1 is freed, str2 is set to NULL
*/

static char	*free_null(char *buff1, char *buff2)
{
	free(buff1);
	free(buff2);
	buff2 = NULL;
	return (buff2);
}

/*
** The `get_next_line` function reads a line from a file descriptor 'fd'.
**
** Parameters:
** fd - The file descriptor from which to read.
**
** Return:
** If memory allocation fails, 'fd' is invalid, or 'BUFFER_SIZE' is not within
** a valid range, the function returns NULL. If a line is successfully read,
** it returns a pointer to the line (including the newline character '\n').
** If the end of the file is reached, it returns the last line without '\n'.
** When there is nothing more to read, it returns NULL.
**
** Description:
** The `get_next_line` function reads from the file descriptor 'fd' until a
** newline character ('\n') is encountered or the end of the file is reached.
** It stores the read content in a static buffer associated with 'fd' to
** handle cases where a line is partially read. It then returns the read line
** as a newly allocated string. Subsequent calls to the function continue
** reading from where it left off in the file.
*/

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
