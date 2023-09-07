/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imbo <imbo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 05:25:00 by imbo              #+#    #+#             */
/*   Updated: 2023/09/07 17:55:04 by imbo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*dtmp;
	char	*stmp;
	size_t	i;

	dtmp = (char *)dest;
	stmp = (char *)src;
	i = 0;
	while (i < n && *stmp != c)
	{
		*dtmp = *stmp;
		i++;
		dtmp++;
		stmp++;
	}
	if (*stmp == c)
	{
		*dtmp = *stmp;
		return (stmp + 1);
	}
	return (NULL);
}
