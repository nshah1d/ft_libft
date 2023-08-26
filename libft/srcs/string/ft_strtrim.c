/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:11:44 by nshahid           #+#    #+#             */
/*   Updated: 2023/06/30 12:11:44 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strtrim function trims leading and trailing characters from a string
** based on a given set of characters.
**
** Parameters:
** s1 - A pointer to the string to be trimmed.
** set - A pointer to the set of characters to be trimmed.
**
** Return:
** If memory allocation is successful and the resulting trimmed string is not
** empty, a pointer to the trimmed string is returned.
** If s1 or set is NULL, or if memory allocation fails, or if the resulting
** trimmed string is empty, NULL is returned.
**
** Description:
** The ft_strtrim function takes two parameters: s1 and set. It first checks if
** either s1 or set is NULL. If true, it means one of the strings is missing,
** and the function returns NULL to indicate an error. Next, it initializes the
** start variable to 0 and enters a loop to find the index of the first
** non-matching character in s1 by iterating over it. Inside the loop, it uses
** the ft_checkchar function to determine if the current character in s1 matches
** any character in the set. If there is a match, it increments the start
** variable to move to the next character. Once the loop finishes, the start
** variable represents the index of the first non-matching character or the end
** of the string if all characters match the set. Similarly, it initializes the
** end variable to the length of s1 and enters a loop to find the index of the
** last non-matching character in s1 by iterating over it in reverse. Inside
** the loop, it uses the ft_checkchar function to determine if the current
** character in s1 matches any character in the set. If there is a match, it
** decrements the end variable to move to the previous character. Once the loop
** finishes, the end variable represents the index of the last non-matching
** character plus one. Next, the ft_strtrim function calls the ft_strnew function
** to allocate memory for the trimmed string. If memory allocation fails,
** ft_strnew returns NULL, and ft_strtrim also returns NULL to indicate
** an error. If memory allocation is successful, ft_strtrim copies the
** non-matching characters from s1 to the trim string starting from the start
** index and ending at the end index. It adds a null terminator at the end of
** the trimmed string to ensure proper termination. Finally, it returns the
** trim pointer, which points to the beginning of the trimmed string. The
** function is useful when you need to remove leading and trailing characters
** from a string based on a given set.
**
** Example:
** char str[] = " Hello, World! ";
** char set[] = " ";
** char *trimmed = ft_strtrim(str, set);
** (The function trims leading and trailing spaces from the string " Hello,
** World! ")
** (The resulting trimmed string is "Hello, World!")
**
** char str[] = " \t\t Welcome to the Jungle \t ";
** char set[] = " \t";
** char *trimmed = ft_strtrim(str, set);
** (The function trims leading and trailing spaces and tabs from the string "
** \t\t Welcome to the Jungle \t ")
** (The resulting trimmed string is "Welcome to the Jungle")
**
** char str[] = "NoTrimmingNeeded";
** char set[] = " ";
** char *trimmed = ft_strtrim(str, set);
** (The function does not perform any trimming as there are no leading or
** trailing spaces in the string "NoTrimmingNeeded")
** (The resulting trimmed string is the same as the original string
** "NoTrimmingNeeded")
*/

static size_t	ft_checkchar(char const *str, char const c)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (*(str + i))
	{
		if (*(str + i) == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (*(s1 + start) && ft_checkchar(set, *(s1 + start)))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_checkchar(set, *(s1 + (end - 1))))
		end--;
	trim = ft_strnew(end - start);
	if (!trim)
		return (NULL);
	i = 0;
	while ((start + i) < end)
	{
		*(trim + i) = *(s1 + (start + i));
		i++;
	}
	*(trim + i) = '\0';
	return (trim);
}
