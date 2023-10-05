/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:24:54 by nshahid           #+#    #+#             */
/*   Updated: 2023/08/27 10:05:38 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_putchar function writes a single character to the standard output.
**
** Parameters:
** c - The character to be written.
**
** Return:
** None.
**
** Description:
** The ft_putchar function takes a character 'c' as its parameter and
** writes it to the standard output (usually the console or terminal).
** It achieves this by calling the ft_putchar_fd function with the
** character 'c' and file descriptor 1 (which corresponds to the standard
** output stream). The result is that the character is displayed on the
** screen.
**
** This function is often used to print characters to the terminal for
** user interaction or to display simple messages or outputs. It's worth
** noting that this function does not provide any line-breaking behavior,
** so successive calls to ft_putchar will result in characters being
** displayed one after another without automatically moving to the next
** line.
**
** Example:
** ft_putchar('A');
** Outputs the character 'A' to the terminal.
** ft_putchar('\n');
** Outputs a newline character to move to the next line.
*/

int	ft_putchar(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}
