/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gnl_strchr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:24:24 by nshahid           #+#    #+#             */
/*   Updated: 2023/09/19 13:20:46 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The `ft_gnl_strchr` function searches for the first occurrence of the
** character 'c' in the string 'str'.
**
** Parameters:
** str - The string to be searched.
** c - The character to search for.
**
** Return:
** If 'c' is found in 'str', a pointer to the first occurrence of 'c' is
** returned.
** If 'c' is not found, or if 'str' is NULL, the function returns NULL.
**
** Description:
** The `ft_gnl_strchr` function iterates through the characters in the string
** 'str' until it reaches the end of the string or until it finds the
** character 'c'. If 'c' is found, a pointer to that character in the string
** is returned. If 'c' is not found, or if 'str' is NULL, the function
** returns NULL.
**
** Example:
** const char *str = "Hello, World!";
** char *result = ft_gnl_strchr(str, 'W');
** Returns a pointer to 'W'
** char *result2 = ft_gnl_strchr(str, 'X');
** Returns NULL
*/

char	*ft_gnl_strchr(char const *str, int c)
{
	if (!str)
		return (NULL);
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	else
		return (NULL);
}
