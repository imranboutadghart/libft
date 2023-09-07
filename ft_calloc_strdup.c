/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_strdup.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imbo <imbo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 09:08:59 by imbo              #+#    #+#             */
/*   Updated: 2023/09/07 11:41:49 by imbo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*addr;
	int		i;

	addr = malloc(nmemb * size);
	i = 0;
	ft_bzero(addr, nmemb * size);
	return (addr);
}

char	*ft_strdup(char *str)
{
	size_t	size;
	size_t	i;
	char	*dst;

	size = ft_strlen(str);
	dst = malloc (size * sizeof(char));
	i = -1;
	while (++i < size)
		dst[i] = str[i];
	return (dst);
}
