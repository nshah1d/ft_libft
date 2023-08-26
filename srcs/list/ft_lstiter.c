/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 01:34:21 by nshahid           #+#    #+#             */
/*   Updated: 2023/08/23 11:02:05 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_lstiter function applies a given function to each element
** of a linked list.
**
** Parameters:
** lst - A pointer to the first element of the list.
** f - A function pointer to the function to be applied to each element's
** content.
**
** Return:
** None.
**
** Description:
** The ft_lstiter function takes a pointer to the first element of
** a linked list (lst) and a function pointer 'f' that points to a
** function which will be applied to the content of each list element.
** It starts by checking if the 'lst' pointer or the 'f' function
** pointer is NULL. If either of them is NULL, it indicates an
** invalid operation or an attempt to iterate over an empty list, and
** the function returns without doing anything.
**
** The function then proceeds to iterate over each element of the
** linked list using a while loop. During each iteration, it does the
** following:
**
** 1. It applies the function 'f' to the content of the current element
** (lst->content). This step allows 'f' to process or modify the content
** as needed.
** 2. It advances the 'lst' pointer to point to the next element in the
** list by setting it to lst->next. This allows the function to move to
** the next element in the next iteration of the loop.
** 3. The loop continues until the 'lst' pointer becomes NULL, indicating
** the end of the list. In other words, the function iterates over all
** elements of the linked list, applying the function 'f' to each element's
** content in the process.
**
** Example:
** void print_content(void *content)
** {
**   printf("Content: %s\n", (char *)content);
** }
**
** t_list *lst = ft_lstnew("Hello");
** ft_lstadd_back(&lst, ft_lstnew("World"));
** ft_lstiter(lst, print_content);
** (The function will print "Content: Hello" and "Content: World")
*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
