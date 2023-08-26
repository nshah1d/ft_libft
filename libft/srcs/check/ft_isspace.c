/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:59:05 by nshahid           #+#    #+#             */
/*   Updated: 2023/06/27 16:59:05 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_isspace function checks if a given character is a whitespace
** character.
**
** Parameters:
** c - The character to be checked.
**
** Return:
** If the character is a whitespace character, the function returns 8192,
** otherwise it returns 0.
**
** Description:
** The ft_isspace function takes an integer 'c' representing a character's
** ASCII value. It checks if the character falls within the range of
** whitespace characters (ASCII values 9 to 13) or if it is the space
** character (ASCII value 32). If the condition is met, indicating that
** the character is a whitespace character, the function returns 8192.
** Otherwise, it returns 0.
**
** Example:
** int result = ft_isspace(' '); // Returns 8192
** int result2 = ft_isspace('A'); // Returns 0
*/

int	ft_isspace(int c)
{
	if ((c > 8 && c < 14)
		|| (c == 32))
		return (8192);
	return (0);
}
