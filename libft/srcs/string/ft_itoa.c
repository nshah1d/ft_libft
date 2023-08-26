/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 21:41:37 by nshahid           #+#    #+#             */
/*   Updated: 2023/08/22 21:41:37 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_itoa function converts an integer to a string representation.
**
** Parameters:
** n - The integer to be converted.
**
** Return:
** A dynamically allocated string representing the converted integer.
** NULL is returned if memory allocation fails.
**
** Description:
** The ft_itoa function converts the given integer into string representation.
** It first determines the sign of the number by checking if it is negative.
** It calculates the length of the resulting string by counting the number
** of digits in the absolute value of the integer. Memory is allocated to store
** the resulting string, including space for the sign and the null-terminator.
** The conversion is performed by iteratively extracting the digits from the
** integer using modulo and division operations. The digits are then converted
** to characters by adding the ASCII value of '0'. The digits are added to the
** string in reverse order to ensure the correct representation of the number.
** Finally, the sign is added if necessary, the null-terminator is appended,
** and the resulting string is returned.
**
** Note: The caller is responsible for freeing the dynamically allocated memory
** for the returned string when it is no longer needed.
**
** Example:
** ft_itoa(12345);
** returns "12345"
**
** ft_itoa(-456);
** returns "-456"
**
** ft_itoa(0);
** returns "0"
**
** ft_itoa(2147483647);
** returns "2147483647" (maximum value of int)
**
** ft_itoa(-2147483648);
** returns "-2147483648" (minimum value of int)
*/

static int	ft_nbrlen(int nbr)
{
	int	len;

	len = 0;
	if (nbr < 1)
		len++;
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	unsigned int	nbr;
	int				sign;
	int				len;
	char			*str;

	sign = 0;
	if (n < 0)
		sign = 1;
	len = ft_nbrlen(n);
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	*(str + len) = '\0';
	nbr = ft_abs(n);
	while (len--)
	{
		*(str + len) = 48 + nbr % 10;
		nbr /= 10;
	}
	if (sign)
		*(str) = 45;
	return (str);
}
