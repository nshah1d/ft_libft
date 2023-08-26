/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 09:18:14 by nshahid           #+#    #+#             */
/*   Updated: 2023/06/29 09:18:14 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strrchr function searches for the last occurrence of a specific
** character in a string.
**
** Parameters:
** str - A pointer to the input string.
** c - The character to be searched for.
**
** Return:
** A pointer to the last occurrence of the character in the string.
** NULL if the character is not found.
**
** Description:
** The ft_strrchr function takes a pointer to the input string 'str' and an
** integer 'c' which represents a character. It declares a pointer 'aux' and
** initializes it to NULL. It enters a loop that iterates until it reaches the
** end of the string, identified by a null terminator character ('\0'). In each
** iteration, it checks if the current character in the string is equal to the
** character 'c' being searched for. If a match is found, it updates the 'aux'
** pointer to point to that character in the string. This way, 'aux' keeps
** track of the last occurrence of the character. After the loop, it checks if
** the last character is equal to 'c'. If the last character matches 'c', it
** returns a pointer to that character. If the last character is not equal to
** 'c', it means the character 'c' is not present in the string, so it returns
** the 'aux' pointer. The 'aux' pointer would be NULL if no occurrence of 'c'
** was found during the loop, indicating that 'c' is not present in the string.
**
** Example:
** char str[] = "Hello, World!";
** char *ptr = ft_strrchr(str, 'o');
** (ptr points to the last occurrence of 'o' in the string "Hello, World!")
**
** char str[] = "Hello, World!";
** char *ptr = ft_strrchr(str, 'Z');
** (ptr is NULL as 'Z' is not found in the string "Hello, World!")
*/

char	*ft_strrchr(char const *str, int c)
{
	char const	*aux;

	aux = NULL;
	while (*str)
	{
		if (*str == (char)c)
			aux = str;
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	else
		return ((char *)aux);
}
