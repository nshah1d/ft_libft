/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 00:08:51 by nshahid           #+#    #+#             */
/*   Updated: 2023/08/25 10:29:06 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_lstadd_front function adds a new element to the beginning of a linked
** list.
**
** Parameters:
** lst - A pointer to the pointer to the first element of the list.
** new - A pointer to the new element to be added to the list.
**
** Return:
** None.
**
** Description:
** The ft_lstadd_front function takes a pointer to the pointer to the first
** element of a linked list (lst) and a pointer to a new element (new) that is
** to be added to the list. If either the 'lst' pointer or the 'new' pointer is
** NULL, the function returns immediately, indicating an invalid operation.
**
** The function then proceeds to add the new element to the beginning of the
** list:
**
** 1. The 'next' pointer of the new element is set to point to the current
** first element of the list, effectively linking the new element to the rest
** of the list.
** 2. The 'lst' pointer is updated to point to the new element, making it the
** new first element of the list.
**
** After these steps, the new element is successfully added to the front of the
** linked list.
**
** Example:
** t_list *lst = ft_lstnew("World");
** ft_lstadd_front(&lst, ft_lstnew("Hello"));
** (The list now contains two elements: "Hello" followed by "World")
*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
