/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:31:08 by nshahid           #+#    #+#             */
/*   Updated: 2023/09/20 09:51:36 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The `ft_format` function formats and prints data based on a format
** specifier.
**
** Parameters:
** args - A va_list containing the variable arguments.
** format - The format specifier character.
**
** Return:
** The function returns the number of characters printed on success. If an
** unsupported format specifier is encountered, it returns -1.
**
** Description:
** The `ft_format` function processes a format specifier character 'format' and
** its corresponding argument from the va_list 'args'. It supports the
** following format specifiers:
** - 'c': Prints a character.
** - 's': Prints a string.
** - 'd' or 'i': Prints an integer.
** - 'X' or 'x': Prints a hexadecimal number.
** - 'p': Prints a pointer address.
** - 'u': Prints an unsigned integer.
** - '%': Prints a percent sign.
**
** The function returns the number of characters printed or -1 if an
** unsupported format specifier is encountered.
**
** Example:
** int len = ft_format(args, 'd'); // Prints and returns the length of an
** integer
*/

static int	ft_format(va_list args, const char format)
{
	void	*ptr;

	if (format == 'c')
		return (ft_putchar((va_arg(args, int))));
	else if (format == 's')
		return (ft_putstr((va_arg(args, char *))));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr((va_arg(args, int))));
	else if (format == 'X' || format == 'x')
		return (ft_puthexa(va_arg(args, unsigned int), format));
	else if (format == 'p')
	{
		ptr = va_arg(args, void *);
		if (ptr)
			return (ft_putaddress(ptr));
		return (ft_putstr("0x0"));
	}
	else if (format == 'u')
		return (ft_putunsigned(va_arg(args, unsigned int)));
	else if (format == '%')
		return (ft_putchar('%'));
	else
		return (-1);
}

/*
** The `ft_printf` function formats and prints data according to a format
** string.
**
** Parameters:
** str - The format string containing format specifiers.
** ... - Variable arguments to be formatted and printed.
**
** Return:
** The function returns the total number of characters printed on success.
** If an unsupported format specifier is encountered or if memory allocation
** fails, it may return -1 or an undefined value.
**
** Description:
** The `ft_printf` function processes the format string 'str' and its variable
** arguments, similar to the standard printf function. It supports format
** specifiers that are prefixed by '%'. For each format specifier encountered
** in 'str', it calls the corresponding format function and accumulates the
** length of characters printed. Any characters in 'str' not part of a format
** specifier are printed directly.
**
** Example:
** int len = ft_printf("Hello, %s!", "World");
** Prints and returns the length
*/

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		length;

	i = 0;
	length = 0;
	va_start(args, str);
	while (*(str + i))
	{
		if (*(str + i) == '%' && ft_strchr("cspdiuxX%", *(str + i + 1)))
		{
			length += ft_format(args, *(str + i + 1));
			i++;
		}
		else
			length += ft_putchar(*(str + i));
		i++;
	}
	va_end(args);
	return (length);
}
