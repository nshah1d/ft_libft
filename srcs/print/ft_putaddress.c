/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 13:23:09 by nshahid           #+#    #+#             */
/*   Updated: 2023/09/20 09:54:45 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_putaddress function converts a pointer to its hexadecimal
** representation and prints it to the standard output with the "0x" prefix.
**
** Parameters:
** format - A void pointer to the address to be converted and printed.
**
** Return:
** The function returns the total number of characters printed.
**
** Description:
** The ft_putaddress function takes a pointer 'format' and converts its value
** into a hexadecimal representation, which is then printed to the standard
** output (usually the console) with the "0x" prefix. It uses the rec_print
** helper function to perform the conversion and printing.
**
** Note:
** This function assumes that the 'format' parameter is a valid pointer.
** Providing an invalid or NULL pointer may lead to undefined behavior.
**
** Example:
** void* ptr = (void*)0x12345678;
** int printed = ft_putaddress(ptr);
** This call to ft_putaddress prints the hexadecimal representation of 'ptr'
** (e.g., "0x12345678") to the standard output and returns the total number
** of characters printed (in this case, 10 characters).
**
** void* null_ptr = NULL;
** int printed = ft_putaddress(null_ptr);
** Calling ft_putaddress with a NULL pointer may lead to undefined behavior.
** Ensure that 'format' is a valid pointer before using this function.
*/

static int	rec_print(unsigned long n, const char *base)
{
	int	len;

	len = 0;
	if (n > (ft_strlen(base) - 1))
		len += rec_print(n / ft_strlen(base), base);
	len += ft_putchar(*(base + (n % ft_strlen(base))));
	return (len);
}

int	ft_putaddress(void *format)
{
	unsigned long	n;
	const char		*base;
	int				len;

	n = (unsigned long)format;
	base = "0123456789abcdef";
	len = ft_putstr("0x");
	len += rec_print(n, base);
	return (len);
}
