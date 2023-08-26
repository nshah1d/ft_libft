/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 22:52:52 by nshahid           #+#    #+#             */
/*   Updated: 2023/06/30 22:52:52 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strmapi function applies a function to each character of a string,
** creating a new string with the results.
**
** Parameters:
** s - A pointer to the input string.
** f - The function to be applied to each character.
** It takes an unsigned integer (the index) and a character as parameters,
** and returns a new character based on the index and the input character.
**
** Return:
** A dynamically allocated string resulting from the application of the
** function to each character of the input string.
** NULL is returned if memory allocation fails or if the input string is NULL.
**
** Description:
** The ft_strmapi function creates a new string by applying the specified
** function to each character of the input string. It first determines the
** length of the input string using the ft_strlen helper function. Memory is
** allocated to store the resulting string, including space for the null. If
** memory allocation fails, NULL is returned. Then, the function iterates over
** each character of the input string, passing the current index and character
** to the provided function. The function returns a new character based on the
** index and input character, which is stored in the resulting string. Finally,
** the null-terminator is appended, and the resulting string is returned.
**
** Note:
** The caller is responsible for freeing the dynamically allocated memory for
** the returned string when it is no longer needed.
**
** Example:
** char uppercase(char c, unsigned int i)
** {
** if (i % 2 == 0)
** return toupper(c);
** else
** return tolower(c);
** }
**
** ft_strmapi("Hello, World!", uppercase);
** returns "HeLlO, wOrLd!"
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;
	char	*result;

	if (!s)
		return (NULL);
	str = ft_strnew(ft_strlen(s));
	if (!str)
		return (NULL);
	i = 0;
	result = str;
	while (*s)
		*str++ = f(i++, *s++);
	*str = '\0';
	return (result);
}
