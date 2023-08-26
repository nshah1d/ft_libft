/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 00:32:48 by nshahid           #+#    #+#             */
/*   Updated: 2023/08/23 11:02:21 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_lstlast function returns a pointer to the last element of a
** linked list.
**
** Parameters:
** lst - A pointer to the first element of the list.
**
** Return:
** A pointer to the last element of the list. If the list is empty
** (i.e., lst is NULL), the function returns NULL.
**
** Description:
** The ft_lstlast function takes a pointer to the first element of a
** linked list (lst). It starts by checking if the 'lst' pointer is
** NULL, indicating an empty list. If 'lst' is NULL, it means there
** are no elements in the list, so the function returns NULL to
** indicate an empty list.
**
** If the list is not empty, the function proceeds to find the last
** element of the list using a while loop. During each iteration, it
** checks if the 'next' pointer of the current element (lst->next) is
** not NULL. If the 'next' pointer is not NULL, it means there are
** more elements in the list, so the function advances to the next
** element by setting 'lst' to lst->next. This process continues until
** the last element is reached, which is the element whose 'next'
** pointer is NULL. Once the last element is found, the function
** returns a pointer to that element, effectively pointing to the last
** element of the list.
**
** Example:
** t_list *lst = ft_lstnew("Hello");
** ft_lstadd_back(&lst, ft_lstnew("World"));
** t_list *last_elem = ft_lstlast(lst);
** (last_elem will point to the element containing "World")
*/

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
