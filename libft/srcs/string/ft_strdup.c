/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 22:25:33 by nshahid           #+#    #+#             */
/*   Updated: 2023/06/29 22:25:33 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strdup function creates a duplicate of a string.
**
** Parameters:
** src - A pointer to the source string.
**
** Return:
** If memory allocation is successful, a pointer to the duplicated string is
** returned. If memory allocation fails or if src is NULL, NULL is returned.
**
** Description:
** The ft_strdup function takes a single parameter: src, which is a pointer to
** the source string. It starts by calling the ft_strnew function to allocate
** memory for the duplicated string. The ft_strnew function is responsible for
** allocating memory and is defined as a static function. If the memory
** allocation fails, ft_strnew returns NULL, and ft_strdup returns NULL as well
** to  indicate an error. If memory allocation is successful, ft_strdup assigns
** the returned pointer to the dest variable. It also assigns the dest pointer
** to the start variable to keep track of the beginning of the duplicated
** string. ft_strdup then enters a loop that iterates until it reaches the end
** of the source string by checking if the current character is not a null
** terminator. In each iteration, it assigns the value of the current character
** in src to the memory location pointed to by dest and increments both
** pointers to move to the next character. After copying all the characters, it
** adds a null terminator at the end of the duplicated string to ensure proper
** termination. Finally, ft_strdup returns the start pointer, which points to
** the beginning of the duplicated string. The function is useful when you need
** to create an independent copy of a string, allowing modifications to the
** duplicated string without affecting the original one.
**
** Example:
** char str[] = "Hello, World!";
** char *dup = ft_strdup(str);
** (The function creates a duplicate of the string "Hello, World!" and assigns
** the pointer to dup, resulting in a new string "Hello, World!")
**
** char *dup = ft_strdup(NULL);
** (The function returns NULL as src is NULL, indicating an error)
*/

char	*ft_strdup(char const *src)
{
	char	*dest;
	char	*start;

	dest = ft_strnew(ft_strlen(src));
	if (!dest)
		return (NULL);
	start = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (start);
}
