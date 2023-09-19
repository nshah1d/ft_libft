/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gnl_strjoin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:01:47 by nshahid           #+#    #+#             */
/*   Updated: 2023/09/19 14:18:07 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The `ft_gnl_strjoin` function concatenates two strings: 'buffer' and
** 'content', into a new string.
**
** Parameters:
**  buffer - The first string to be concatenated.
**  content - The second string to be concatenated.
**
** Return:
**  If memory allocation fails or if both 'buffer' and 'content' are NULL,
**  the function returns NULL.
**  Otherwise, it returns a newly allocated string containing the
**  concatenated result.
**
** Description:
**  The `ft_gnl_strjoin` function calculates the lengths of 'buffer' and
**  'content' and allocates memory for a new string that can accommodate both
**  strings. It then copies the characters from 'buffer' and 'content' into
**  the new string and ensures it is null-terminated. Finally, it frees the
**  memory occupied by the original 'buffer' and returns the new concatenated
**  string.
**
** Example:
**  char *buffer = "Hello, ";
**  const char *content = "World!";
**  char *result = ft_gnl_strjoin(buffer, content);
**  Returns "Hello, World!"
*/

char	*ft_gnl_strjoin(char *buffer, const char *content)
{
	size_t	buffer_len;
	size_t	content_len;
	char	*result;
	char	*result_ptr;
	char	*src;

	buffer_len = 0;
	if (!buffer && !content)
		return (NULL);
	if (buffer)
		buffer_len = ft_strlen(buffer);
	content_len = ft_strlen(content);
	result = (char *)malloc(sizeof(char) * (buffer_len + content_len + 1));
	if (!result)
		return (NULL);
	result_ptr = result;
	src = buffer;
	while (src && *src)
		*result_ptr++ = *src++;
	src = (char *)content;
	while (src && *src)
		*result_ptr++ = *src++;
	*result_ptr = '\0';
	free(buffer);
	return (result);
}
