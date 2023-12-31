/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:24:48 by nshahid           #+#    #+#             */
/*   Updated: 2023/09/25 21:56:56 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_putbase_fd function writes an integer in a specified base to a given
** file descriptor.
**
** Parameters:
** nbr - The integer to be converted and written.
** base - A pointer to a null-terminated string representing the base.
** fd - The file descriptor to write the converted string to.
**
** Return:
** None.
**
** Description:
** The ft_putbase_fd function takes an integer 'nbr', a pointer 'base' to a
** null-terminated string representing the base, and an integer 'fd' indicating
** the file descriptor. It converts 'nbr' to the specified base and writes the
** result to the file descriptor 'fd'.
**
** The function begins by calculating the length of the base by calling the
** ft_strlen function.
**
** If 'nbr' is negative, it writes a minus sign ('-') to the file descriptor
** 'fd' and converts the absolute value of 'nbr' to a positive long integer
** 'nb'. Otherwise, it directly assigns 'nbr' to 'nb'.
**
** Next, the function checks if 'nb' is greater than or equal to the length of
** the base. If it is, the function recursively calls itself with the updated
** value of 'nb' divided by the base length. This effectively handles
** multi-digit conversions. Then, it writes the corresponding character from
** the base to the output.
**
** Example:
** ft_putbase_fd(255, "01", 1);
** Writes "11111111" in binary to the file descriptor 1 (stdout).
** ft_putbase_fd(42, "0123456789ABCDEF", 1);
** Writes "2A" in hexadecimal to the file descriptor 1 (stdout).
*/


void	ft_putbase_fd(int nbr, const char *base, int fd)
{
	int		base_len;
	long	nb;
	char	c;

	base_len = ft_strlen(base);
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nb = -((long)nbr);
	}
	else
		nb = (long)nbr;
	if (nb > (base_len - 1))
		ft_putbase_fd(nb / base_len, base, fd);
	c = *(base + (nb % base_len));
	write(fd, &c, 1);
}
