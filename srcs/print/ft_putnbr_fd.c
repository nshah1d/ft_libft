/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 09:08:24 by nshahid           #+#    #+#             */
/*   Updated: 2023/07/01 09:08:24 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_putnbr_fd function writes an integer to a given file descriptor.
**
** Parameters:
** n - The integer to be written.
** fd - The file descriptor to write the integer to.
**
** Return:
** None.
**
** Description:
** The ft_putnbr_fd function takes an integer 'n' and a file descriptor 'fd'
** as its parameters. It converts the integer 'n' to its decimal representation
** and writes the result to the specified file descriptor.
**
** The function uses the base "0123456789" to convert the integer 'n' to its
** decimal representation. It achieves this by calling the ft_putbase_fd
** function with the integer 'n', the base "0123456789", and the specified file
**  descriptor 'fd'.
**
** This function is often used to print integers to a specific output, such as
** a file or a particular terminal, rather than to the standard output.
**
** Example:
** ft_putnbr_fd(12345, 1);
** Writes "12345" to the standard output.
** int file_fd = open("output.txt", O_WRONLY);
** ft_putnbr_fd(-42, file_fd);
** Writes "-42" to the file "output.txt".
** close(file_fd);
*/

void	ft_putnbr_fd(int n, int fd)
{
	char const	*base;

	base = "0123456789";
	ft_putbase_fd(n, base, fd);
}
