/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 08:05:57 by nshahid           #+#    #+#             */
/*   Updated: 2023/08/25 13:27:45 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_putendl function writes a null-terminated string followed by a
** newline character to the standard output.
**
** Parameters:
** s - A pointer to the null-terminated string to be written.
**
** Return:
** None.
**
** Description:
** The ft_putendl function takes a null-terminated string 's' as its
** parameter and writes it to the standard output (usually the console
** or terminal), followed by a newline character '\n'. It achieves this
** by calling the ft_putendl_fd function with the string 's' and file
** descriptor 1 (which corresponds to the standard output stream).
** The result is that the string is displayed on the screen, and a newline
** character is added to move to the next line.
**
** This function is often used to print messages or outputs with automatic
** line-breaking behavior, as the newline character ensures that the next
** output will appear on a new line.
**
** Example:
** ft_putendl("Hello, world!");
** Outputs "Hello, world!" followed by a newline.
** ft_putendl("Line 1");
** ft_putendl("Line 2");
** Outputs "Line 1" and "Line 2" on separate lines.
*/

void	ft_putendl(char *s)
{
	ft_putendl_fd(s, 1);
}
