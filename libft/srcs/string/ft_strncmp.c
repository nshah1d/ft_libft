/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 21:32:55 by nshahid           #+#    #+#             */
/*   Updated: 2023/06/29 21:32:55 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strncmp function compares two strings up to a specified length.
**
** Parameters:
** s1 - A pointer to the first string.
** s2 - A pointer to the second string.
** n - The maximum number of characters to compare.
**
** Return:
** If the strings are equal, 0 is returned.
** If s1 is less than s2, a negative value is returned.
** If s1 is greater than s2, a positive value is returned.
**
** Description:
** The ft_strncmp function takes three parameters: s1, s2, and n. It first
** checks if n is zero. If true, it means no characters should be compared, so
** it returns 0 to indicate equality. The function enters a loop that iterates
** until it reaches the end of either s1 or s2, or until n becomes 1. In each
** iteration, it compares the characters at the current positions of s1 and s2.
** If the characters are equal and n is greater than 1, it means a potential
** match is found, so it increments s1, s2, and decrements n to move to the
** next character. The function continues comparing characters until a
** difference is found or n becomes 1. Once the loop ends, it means either the
** end of s1 or s2 is reached, or n becomes 1. If the strings are equal, it
** returns 0. If s1 is less than s2, it means s1 is lexicographically smaller,
** so it returns a negative value. If s1 is greater than s2, it means s1 is
** lexicographically larger, so it returns a positive value. By casting the
** characters to unsigned char, the function ensures correct comparison of
** characters without any sign extension issues. This function can be used to
** compare strings in a lexicographical order up to a specified length.
**
** Example:
** char str1[] = "Hello";
** char str2[] = "World";
** int result = ft_strncmp(str1, str2, sizeof(str1));
** (The function compares the strings "Hello" and "World" up to the length of
** str1. Since the first characters ('H' and 'W') are different, it returns a
** negative value)
**
** char str1[] = "Hello";
** char str2[] = "Hella";
** int result = ft_strncmp(str1, str2, sizeof(str1));
** (The function compares the strings "Hello" and "Hella" up to the length of
** str1. Since the fifth character ('o') is greater than the corresponding
** character ('a'), it returns a positive value)
*/

int	ft_strncmp(char const *s1, char const *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 && *s2 && *s1 == *s2 && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	return (((unsigned char)(*s1) - (unsigned char)(*s2)));
}
