/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboutadg <iboutadg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:55:30 by iboutadg          #+#    #+#             */
/*   Updated: 2023/11/06 19:56:41 by iboutadg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr;
	t_list	*prev;

	if (!lst)
		return ;
	curr = *lst;
	while (curr)
	{
		prev = curr;
		curr = curr->next;
		ft_lstdelone(prev, del);
	}
	*lst = 0;
}
