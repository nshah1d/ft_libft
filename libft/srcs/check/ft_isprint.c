/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 12:56:24 by nshahid           #+#    #+#             */
/*   Updated: 2023/06/27 12:56:24 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_isprint function checks if a given character is a printable
** character.
**
** Parameters:
** c - The character to be checked.
**
** Return:
** If the character is a printable character, the function returns 16384,
** otherwise it returns 0.
**
** Description:
** The ft_isprint function takes an integer 'c' representing a character's
** ASCII value. It checks if the character's ASCII value falls within the
** range of printable characters (ASCII values 32 to 126). If the condition
** is met, indicating that the character is a printable character, the
** function returns 16384. Otherwise, it returns 0.
**
** Example:
** int result = ft_isprint('A'); // Returns 16384
** int result2 = ft_isprint('\t'); // Returns 0
*/

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (16384);
	return (0);
}
