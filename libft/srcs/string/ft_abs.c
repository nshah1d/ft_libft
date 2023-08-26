/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 09:11:13 by nshahid           #+#    #+#             */
/*   Updated: 2023/08/25 13:59:50 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_abs function calculates the absolute value of a long integer.
**
** Parameters:
** n - The long integer for which the absolute value will be calculated.
**
** Return:
** The absolute value of the input long integer 'n'.
**
** Description:
** The ft_abs function takes a long integer 'n' as its parameter and
** calculates its absolute value. The absolute value of a number is its
** distance from zero on the number line, regardless of its sign.
**
** The function first initializes a variable 'nb' with the value 1. It
** then checks if the input 'n' is negative. If 'n' is negative, the
** function multiplies 'nb' by the negation of 'n', effectively calculating
** the absolute value. If 'n' is non-negative, 'nb' is multiplied by 'n',
** which remains unchanged since its absolute value is positive.
**
** The calculated absolute value is then returned by the function.
**
** Example:
** long result = ft_abs(-42); // Returns 42
** long result2 = ft_abs(99); // Returns 99
*/

long	ft_abs(long n)
{
	long	nb;

	nb = 1;
	if (n < 0)
		nb *= -n;
	else
		nb *= n;
	return (nb);
}
