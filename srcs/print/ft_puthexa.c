/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 09:39:32 by nshahid           #+#    #+#             */
/*   Updated: 2023/09/20 10:03:26 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_puthexa function converts an unsigned long integer to its
** hexadecimal representation and prints it to the standard output.
**
** Parameters:
** n - The unsigned long integer to be converted and printed.
** format - A character specifying the format ('x' or 'X') for hexadecimal
** letters (lowercase or uppercase).
**
** Return:
** The function returns the total number of characters printed.
**
** Description:
** The ft_puthexa function takes an unsigned long integer 'n' and converts its
** value into a hexadecimal representation. It then prints the hexadecimal
** representation to the standard output, using lowercase letters ('a' to 'f')
** if 'format' is 'x', and uppercase letters ('A' to 'F') if 'format' is 'X'.
**
** Note:
** - This function assumes that 'format' is either 'x' or 'X'. Providing any
** other character as 'format' may lead to unexpected results.
** - The function handles the conversion and printing of the hexadecimal
** representation recursively.
**
** Example:
** unsigned long value = 255;
** char format = 'x';
** int printed = ft_puthexa(value, format);
** This call to ft_puthexa prints the hexadecimal representation of 'value'
** (e.g., "ff" in lowercase) to the standard output and returns the total
** number of characters printed (in this case, 2 characters).
**
** unsigned long large_value = 65535;
** char format = 'X';
** int printed = ft_puthexa(large_value, format);
** This call to ft_puthexa prints the hexadecimal representation of
** 'large_value'
** (e.g., "FFFF" in uppercase) and returns the total number of characters
** printed (in this case, 4 characters).
*/

int	ft_puthexa(unsigned long n, char format)
{
	char			*base;
	unsigned int	num;
	int				i;
	unsigned int	base_len;

	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	i = 0;
	num = (unsigned int)n;
	base_len = ft_strlen(base);
	if (num > (base_len - 1))
		i += ft_puthexa(num / base_len, format);
	i += ft_putchar(*(base + (num % base_len)));
	return (i);
}
