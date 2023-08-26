/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:43:12 by nshahid           #+#    #+#             */
/*   Updated: 2023/06/27 15:43:12 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_isascii function checks if a given character is a valid ASCII
** character.
**
** Parameters:
** c - The character to be checked.
**
** Return:
** If the character is a valid ASCII character, the function returns 1,
** otherwise it returns 0.
**
** Description:
** The ft_isascii function takes an integer 'c' representing a character's
** ASCII value. It checks if the character's ASCII value is within the
** valid ASCII range (0 to 127). If the condition is met, indicating that
** the character is a valid ASCII character, the function returns 1.
** Otherwise, it returns 0.
**
** Example:
** int result = ft_isascii('A'); // Returns 1
** int result2 = ft_isascii(129); // Returns 0
*/

int	ft_isascii(int c)
{
	if (c > -1 && c < 128)
		return (1);
	return (0);
}
