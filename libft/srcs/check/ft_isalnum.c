/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:31:07 by nshahid           #+#    #+#             */
/*   Updated: 2023/06/27 15:31:07 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_isalnum function checks if a given character is an alphanumeric
** character (A-Z, a-z, or 0-9).
**
** Parameters:
** c - The character to be checked.
**
** Return:
** If the character is an alphanumeric character, the function returns 8,
** otherwise it returns 0.
**
** Description:
** The ft_isalnum function takes an integer 'c' representing a character's
** ASCII value. It checks if the character's ASCII value falls within the
** range of uppercase letters (ASCII values 65 to 90), lowercase letters
** (ASCII values 97 to 122), or digits (ASCII values 48 to 57). If the
** condition is met, indicating that the character is an alphanumeric
** character, the function returns 8. Otherwise, it returns 0.
**
** Example:
** int result = ft_isalnum('C'); // Returns 8
** int result2 = ft_isalnum('$'); // Returns 0
*/

int	ft_isalnum(int c)
{
	if ((c > 64 && c < 91)
		|| (c > 96 && c < 123)
		|| (c > 47 && c < 58))
		return (8);
	return (0);
}
