/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 08:18:10 by nshahid           #+#    #+#             */
/*   Updated: 2023/07/01 08:18:10 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_putchar_fd function writes a character to a specified file
** descriptor.
**
** Parameters:
** c - The character to be written.
** fd - The file descriptor where the character will be written.
**
** Return:
** None.
**
** Description:
** The ft_putchar_fd function writes a single character to the specified file
** descriptor. It uses the write system call to write the character to the file
** descriptor. The function assumes that the write operation will be successful
** and does not include explicit error handling.
**
** Note:
** It's important to ensure that the file descriptor is valid and open for
** writing before calling this function to avoid unexpected behavior or errors.
**
** Example:
** ft_putchar_fd('A', 1);
** The character 'A' will be written to the standard output (STDOUT_FILENO).
**
** ft_putchar_fd('\n', 2);
** The character '\n' will be written to the standard error (STDERR_FILENO).
**
** ft_putchar_fd('\t', 0);
** The character '\t' will be written to the standard input (STDIN_FILENO).
** (Note: The character will not be visible on the terminal since it is an
** input stream)
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
