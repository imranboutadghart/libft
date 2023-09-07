/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imbo <imbo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 05:25:38 by imbo              #+#    #+#             */
/*   Updated: 2023/09/07 11:31:21 by imbo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	if (!needle || !haystack)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < n)
	{
		j = 0;
		while (needle[j] && haystack[i + j] && haystack[i + j] == needle[j])
			j++;
		if (!needle[j] && i + j < n)
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}
