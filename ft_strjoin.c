/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imbo <imbo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:30:56 by imbo              #+#    #+#             */
/*   Updated: 2023/09/07 12:36:37 by imbo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*dst;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	dst = (char *)malloc((i + j) * sizeof(char));
	if (!dst)
		return (0);
	k = -1;
	while (++k < i)
		dst[k] = s1[k];
	while (k < i + j)
		dst[k] = s2[k - i];
	return (dst);
}
