/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 09:40:35 by nshahid           #+#    #+#             */
/*   Updated: 2023/09/11 12:34:59 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_putstr function writes a null-terminated string to the standard output.
**
** Parameters:
** s - A pointer to the null-terminated string to be written.
**
** Return:
** None.
**
** Description:
** The ft_putstr function takes a null-terminated string 's' as its
** parameter and writes it to the standard output (usually the console
** or terminal). It achieves this by calling the ft_putstr_fd function
** with the string 's' and file descriptor 1 (which corresponds to the
** standard output stream). The result is that the string is displayed
** on the screen.
**
** This function is often used to print messages, outputs, or textual data
** to the terminal for user interaction.
**
** Example:
** ft_putstr("Hello, world!");
** Outputs "Hello, world!" to the terminal.
** ft_putstr("Text line 1");
** ft_putstr("Text line 2");
** Outputs "Text line 1" and "Text line 2" sequentially.
*/

int	ft_putstr(char const *s)
{
	if (!s)
		return (write(1, "(null)", 6));
	return (write(1, s, ft_strlen(s)));
}
