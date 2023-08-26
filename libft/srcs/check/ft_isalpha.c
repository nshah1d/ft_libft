/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 13:28:59 by nshahid           #+#    #+#             */
/*   Updated: 2023/06/27 13:28:59 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_isalpha function checks if a given character is an alphabetic
** character (A-Z or a-z).
**
** Parameters:
** c - The character to be checked.
**
** Return:
** If the character is an alphabetic character, the function returns 1024,
** otherwise it returns 0.
**
** Description:
** The ft_isalpha function takes an integer 'c' representing a character's
** ASCII value. It checks if the character's ASCII value falls within the
** range of uppercase letters (ASCII values 65 to 90) or lowercase
** letters (ASCII values 97 to 122). If the condition is met, indicating
** that the character is an alphabetic character, the function returns
** 1024. Otherwise, it returns 0.
**
** Example:
** int result = ft_isalpha('B'); // Returns 1024
** int result2 = ft_isalpha('2'); // Returns 0
*/

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91)
		|| (c > 96 && c < 123))
		return (1024);
	return (0);
}
