/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 01:01:17 by nshahid           #+#    #+#             */
/*   Updated: 2023/08/25 10:31:29 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_lstadd_back function adds a new element to the end of a linked
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
** The ft_lstadd_back function takes a pointer to the pointer to the
** first element of a linked list (lst) and a pointer to a new element
** (new) that is to be added to the list. If either the 'lst' pointer
** or the 'new' pointer is NULL, the function returns immediately,
** indicating an invalid operation.
**
** If the list is empty (i.e., the 'lst' pointer is NULL), the function
** simply updates the 'lst' pointer to point to the new element,
** making it the first element of the list.
**
** If the list is not empty, the function traverses the list to find
** the last element:
**
** 1. A pointer 'ptr' is initialized to point to the first element of
** the list.
** 2. The function iterates through the list by following the 'next'
** pointers until the last element is reached (i.e., 'ptr->next' is NULL).
** 3. Once the last element is found, the 'next' pointer of the last
** element is updated to point to the new element, effectively adding the
** new element to the end of the list.
**
** After these steps, the new element is successfully added to the back
** of the linked list.
**
** Example:
** t_list *lst = ft_lstnew("Hello");
** ft_lstadd_back(&lst, ft_lstnew("World"));
** (The list now contains two elements: "Hello" followed by "World")
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (!lst || !new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	ptr = *lst;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = new;
}
