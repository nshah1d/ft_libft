/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 01:09:58 by nshahid           #+#    #+#             */
/*   Updated: 2023/08/23 11:01:45 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_lstdelone function deallocates the memory occupied by a single
** element of a linked list while using a user-provided function to free
** the content of that element.
**
** Parameters:
** lst - A pointer to the element to be deallocated.
** del - A function pointer to the function used to free the content
** of the element.
**
** Return:
** None.
**
** Description:
** The ft_lstdelone function takes a pointer to an element of a linked
** list (lst) and a function pointer 'del' that points to a function
** responsible for freeing the memory of the content of that list
** element. It starts by checking if the 'lst' pointer or the 'del'
** function pointer is NULL. If either of them is NULL, it indicates an
** invalid operation or an attempt to delete a non-existing element,
** and the function returns without doing anything.
**
** The function then proceeds to delete the element using the following
** steps:
**
** 1. It calls the 'del' function to free the memory of the content (if
** it was allocated dynamically). This step ensures that the memory
** occupied by the content of the element is properly freed.
** 2. After freeing the content, the element itself is deallocated using
** the free function to release the memory occupied by the element.
** 3. Finally, the 'lst' pointer (passed as a parameter) is set to NULL.
** However, it's important to note that this action does not affect
** the original pointer outside of this function since it is a copy
** of the original pointer passed to the function.
**
** The result is that the memory occupied by the specified element and
** its content (if it exists) is deallocated, and the pointer to the
** element remains valid, but it is set to NULL inside the function's
** scope.
**
** Example:
** void del_content(void *content)
** {
**   free(content);
** }
**
** t_list *elem = ft_lstnew("Hello");
** ft_lstdelone(elem, del_content);
** (The element 'elem' is deallocated, and 'elem' is set to NULL)
*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(del)(lst->content);
	free(lst);
	lst = NULL;
}
