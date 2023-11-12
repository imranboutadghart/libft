/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboutadg <iboutadg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:27:29 by iboutadg          #+#    #+#             */
/*   Updated: 2023/11/07 22:58:41 by iboutadg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int	res;

	res = (c <= 'Z' && c >= 'A') || (c <= 'z' && c >= 'a');
	res = res || (c <= '9' && c >= '0');
	if (res)
		return (1);
	return (0);
}