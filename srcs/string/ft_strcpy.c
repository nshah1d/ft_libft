/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:56:39 by nshahid           #+#    #+#             */
/*   Updated: 2023/09/20 10:02:40 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strcpy function copies a string from source to destination.
**
** Parameters:
** dest - A pointer to the destination buffer where the string will be copied.
** src - A pointer to the source string to be copied.
**
** Return:
** The function returns a pointer to the destination buffer (i.e., 'dest').
**
** Description:
** The ft_strcpy function copies the contents of the 'src' string to the
** 'dest' buffer, including the null-terminator. It continues copying
** characters from 'src' to 'dest' until it reaches the null-terminator in
** 'src'. After copying, it ensures that 'dest' is null-terminated.
**
** Note:
** - The destination buffer ('dest') must be large enough to accommodate the
** source string ('src') and the null-terminator. Failure to provide a
** sufficiently large buffer may result in buffer overflow.
** - It is the responsibility of the caller to ensure that 'src' points to a
** valid null-terminated string to prevent undefined behavior.
**
** Example:
** char source[] = "Hello, World!";
** char destination[20]; // Make sure the destination buffer is large enough.
** char* result = ft_strcpy(destination, source);
** After calling ft_strcpy, the 'destination' buffer will contain the string
** "Hello, World!" and will be null-terminated. 'result' will point to
** 'destination'.
**
** char empty_source[] = "";
** char dest[10]; // Ensure the destination buffer is large enough.
** char* res = ft_strcpy(dest, empty_source);
** When copying an empty string, 'dest' will be set to an empty string ("").
** 'res' will point to 'dest'.
*/

char	*ft_strcpy(char *dest, const char *src)
{
	char	*dest_start;

	dest_start = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (dest_start);
}
