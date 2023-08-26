/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 21:48:49 by nshahid           #+#    #+#             */
/*   Updated: 2023/06/28 21:48:49 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_toupper function converts a lowercase character to its uppercase
** equivalent.
**
** Parameters:
** c - The character to be converted.
**
** Return:
** The uppercase equivalent of the input character, if it is a lowercase
** letter.
** The input character itself, if it is not a lowercase letter.
**
** Description:
** The ft_toupper function takes an input character 'c'.
** It checks if 'c' is in the range of lowercase letters, which corresponds to
** ASCII values from 97 to 122. If 'c' is a lowercase letter, it subtracts 32
** from its ASCII value to convert it to the corresponding uppercase letter.
** This conversion is possible because the ASCII values for uppercase and
** lowercase letters have a difference of 32. Finally, it returns the converted
**uppercase letter if 'c' was a lowercase letter, or the input character itself
** if 'c' was not a lowercase letter.
**
** Example:
** ft_toupper('a');
** returns 'A'
** ft_toupper('B');
** returns 'B' (not a lowercase letter)
** ft_toupper('$');
** returns '$' (not a letter)
*/

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		c -= 32;
	return (c);
}
