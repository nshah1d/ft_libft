/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 09:39:32 by nshahid           #+#    #+#             */
/*   Updated: 2023/08/31 10:41:25 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_putnbr function writes an integer to the standard output.
**
** Parameters:
** n - The integer to be written.
**
** Return:
** None.
**
** Description:
** The ft_putnbr function takes an integer 'n' as its parameter and writes
** it to the standard output (usually the console or terminal).
** It achieves this by calling the ft_putnbr_fd function with the
** integer 'n' and file descriptor 1 (which corresponds to the standard
** output stream). The result is that the integer is displayed on the
** screen.
**
** This function is often used to print integers to the terminal for
** user interaction or to display numerical outputs.
**
** Example:
** ft_putnbr(12345);
** Outputs "12345" to the terminal.
** ft_putnbr(-42);
** Outputs "-42" to the terminal.
*/

static int	ft_nbrlen(long n)
{
	int	i;

	if (n < 0)
	{
		n = ft_abs(n);
		i = 1;
	}
	else
		i = 0;
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i + 1);
}

int	ft_putnbr(int n)
{
	int	nbr_len;

	nbr_len = ft_nbrlen(n);
	ft_putnbr_fd(n, 1);
	return (nbr_len);
}
