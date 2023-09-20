/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 21:27:25 by nshahid           #+#    #+#             */
/*   Updated: 2023/09/20 10:00:38 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_putunsigned function converts an unsigned long integer to its
** decimal representation and prints it to the standard output.
**
** Parameters:
** n - The unsigned long integer to be converted and printed.
**
** Return:
** The function returns the total number of characters printed.
**
** Description:
** The ft_putunsigned function takes an unsigned long integer 'n' and converts
** its value into a decimal representation. It then prints the decimal
** representation to the standard output. The function recursively divides 'n'
** by 10 to obtain each digit and prints them.
**
** Note:
** - This function assumes that 'n' is a non-negative integer. Providing a
** negative value for 'n' may lead to unexpected results.
** - The function does not handle leading zeros or sign characters for
** negative numbers. It assumes positive values only.
**
** Example:
** unsigned long value = 12345;
** int printed = ft_putunsigned(value);
** This call to ft_putunsigned prints the decimal representation of 'value'
** (i.e., "12345") to the standard output and returns the total number of
** characters printed (in this case, 5 characters).
**
** unsigned long zero_value = 0;
** int printed = ft_putunsigned(zero_value);
** This call to ft_putunsigned prints the decimal representation of
** 'zero_value' (i.e., "0") and returns the total number of characters printed
** (in this case, 1 character).
*/

int	ft_putunsigned(unsigned long n)
{
	int		len;
	char	*base;

	len = 0;
	base = "0123456789";
	if (n > (ft_strlen(base) - 1))
		len += ft_putunsigned(n / ft_strlen(base));
	len += ft_putchar(*(base + (n % ft_strlen(base))));
	return (len);
}
