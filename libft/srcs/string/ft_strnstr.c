/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 20:34:29 by nshahid           #+#    #+#             */
/*   Updated: 2023/06/29 20:34:29 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strnstr function searches for the first occurrence of a substring
** within a given string, up to a specified length.
**
** Parameters:
** haystack - A pointer to the string to be searched.
** needle - A pointer to the substring to search for.
** n - The maximum number of characters to search.
**
** Return:
** If the substring is found, a pointer to the first occurrence of the
** substring within the string is returned.
** If the substring is not found or if n is zero, NULL is returned.
**
** Description:
** The ft_strnstr function takes three parameters: haystack, needle, and n. It
** starts by checking if haystack is NULL and n is zero. If both conditions are
** true, it returns NULL to indicate an invalid operation. It then checks if
** needle is an empty string ('\0'). If true, it means an empty string is
** always considered to be present at the beginning of the haystack, so it
** returns a pointer to the haystack. The function enters a loop that iterates
** until it reaches the end of the haystack string or until n becomes zero. In
** each iteration, it initializes a variable j to 0 to keep track of the
** current position in the needle string. It then compares the characters at
** the current positions of haystack and needle. If the characters are equal
** and the character in needle is not a null terminator, it means a potential
** match is found, so it increments j and checks if j is less than or equal to
** n to ensure it stays within the search limit. It also checks if the next
** character in needle is a null terminator. If true, it means the entire
** needle is found in haystack, so it returns a pointer to the current
** position in haystack. If no match is found, it increments haystack to move
** to the next character and continues searching. Once the loop ends, it means
** either the end of haystack is reached or n becomes zero. In either case, it
** means the substring is not found, so it returns NULL to indicate the
** absence of the substring.
**
** Note: The function searches for a substring within the first 'n' characters
** of the haystack string. If 'n' is greater than the length of the haystack,
** it will search the entire haystack string.
**
** Example:
** char str[] = "Hello, World!";
** char sub[] = "World";
** char *result = ft_strnstr(str, sub, sizeof(str));
** (The function searches for the substring "World" within the string "Hello,
** World!". Since the substring is found, it returns a pointer to the position
** "World!" within the haystack)
**
** char str[] = "Hello, World!";
** char sub[] = "Foo";
** char *result = ft_strnstr(str, sub, sizeof(str));
** (The function searches for the substring "Foo" within the string "Hello,
** World!". Since the substring is not found, it returns NULL)
*/

char	*ft_strnstr(char const *haystack, char const *needle, size_t n)
{
	size_t	j;

	if (!haystack && !n)
		return (NULL);
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && n--)
	{
		j = 0;
		while (*(haystack + j) == *(needle + j)
			&& *(needle + j) && j <= n)
		{
			if (!*(needle + j + 1))
				return ((char *)haystack);
			j++;
		}
		haystack++;
	}
	return (NULL);
}
