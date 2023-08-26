/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:14:58 by nshahid           #+#    #+#             */
/*   Updated: 2023/06/27 17:14:58 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strlen function calculates the length of a string.
**
** Parameters:
** str - A pointer to the input string.
**
** Return:
** The length of the string as a size_t value.
**
** Description:
** The ft_strlen function takes a pointer to a null-terminated string as input
** and calculates its length. It initializes a variable 'i' to 0 and then
** enters a loop that continues until it encounters a null terminator character
** ('\0'). In each iteration, it checks the value at the memory location
** pointed to by the 'str' pointer plus the offset 'i'. If the value is not a
** null terminator, it increments 'i' by 1. This process continues until the
** null terminator is found, indicating the end of the string. Finally, it
** returns the value of 'i', which represents the length of the string.
**
** Example:
** ft_strlen("Hello");
** returns 5
** ft_strlen("");
** returns 0
** ft_strlen("12345");
** returns 5
** ft_strlen("This is a long string!");
** returns 22
*/

size_t	ft_strlen(char const *str)
{
	size_t	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}
