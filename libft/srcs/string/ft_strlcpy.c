/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 07:29:54 by nshahid           #+#    #+#             */
/*   Updated: 2023/06/28 07:29:54 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strlcpy function copies a string from the source to the destination
** with a specified size limit.
**
** Parameters:
** dest - A pointer to the destination string.
** src - A pointer to the source string.
** n - The size limit of the destination buffer.
**
** Return:
** The length of the source string.
**
** Description:
** The ft_strlcpy function takes a pointer to the destination string (dest),
** a pointer to the source string (src), and the size limit of the destination
** buffer (n). It initializes a variable 'i' to 0 to keep track of the length
** of the source string. It then enters a loop that iterates until it reaches
** the end of the source string, identified by a null terminator character
** ('\0'). In each iteration, it increments 'i' by 1 to count the length of the
** source string.
**
** After counting the length, it checks if the size limit 'n' is zero. If 'n'
** is zero, it means there is no space in the destination buffer, so the
** function returns the length of the source string.
**
** Otherwise, it enters another loop that copies characters from the source
** string to the destination buffer. It decrements 'n' to account for the
** space taken by the null terminator character. It also checks if the current
** character in the source string is not a null terminator ('\0') to continue
** copying. Inside the loop, it assigns the value at 'src' to 'dest' and
** increments both 'dest' and 'src' pointers to move to the next character.
** This process continues until 'n' becomes zero or the null terminator is
** reached. Finally, it adds a null terminator character at the end of the
** destination buffer to ensure it is properly terminated, and it returns the
** length of the source string.
**
** Note: The function assumes that the destination buffer has enough space to
** accommodate at least 'n' characters plus the null terminator. Otherwise,
** it may lead to buffer overflow.
**
** Example:
** char src[] = "Hello";
** char dest[6];
** ft_strlcpy(dest, src, sizeof(dest));
** (The string "Hello" is copied to 'dest' with proper null termination)
**
** char src[] = "This is a very long string";
** char dest[10];
** ft_strlcpy(dest, src, sizeof(dest));
** (The string "This is " is copied to 'dest' with proper null termination due
** to size limit)
*/

size_t	ft_strlcpy(char *dest, char const *src, size_t n)
{
	size_t	i;

	i = 0;
	while (*(src + i))
		i++;
	if (!n)
		return (i);
	while (--n && *src)
		*dest++ = *src++;
	*dest = '\0';
	return (i);
}
