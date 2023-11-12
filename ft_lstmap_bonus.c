/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboutadg <iboutadg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:21:02 by iboutadg          #+#    #+#             */
/*   Updated: 2023/11/06 19:58:10 by iboutadg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*curr;

	if (!lst)
		return (lst);
	newlist = (t_list *)malloc(sizeof(t_list));
	if (!newlist)
		return (0);
	newlist->content = f(lst->content);
	del(newlist->content);
	newlist->content = f(lst->content);
	curr = newlist;
	while (lst->next)
	{
		curr->next = (t_list *)malloc(sizeof(t_list));
		if (!curr->next)
		{
			ft_lstclear(&newlist, del);
			return (0);
		}
		curr = curr->next;
		lst = lst->next;
		curr->content = f(lst->content);
	}
	return (newlist);
}
