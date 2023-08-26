/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 14:02:39 by nshahid           #+#    #+#             */
/*   Updated: 2023/06/27 14:02:39 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_isdigit function checks if a given character is a digit (0-9).
**
** Parameters:
** c - The character to be checked.
**
** Return:
** If the character is a digit, the function returns 1, otherwise it
** returns 0.
**
** Description:
** The ft_isdigit function takes an integer 'c' representing a character's
** ASCII value. It checks if the character's ASCII value falls within the
** range of digits (ASCII values 48 to 57). If the condition is met,
** indicating that the character is a digit, the function returns 1.
** Otherwise, it returns 0.
**
** Example:
** int result = ft_isdigit('5'); // Returns 1
** int result2 = ft_isdigit('A'); // Returns 0
*/

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
