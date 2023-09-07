/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imbo <imbo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:21:26 by imbo              #+#    #+#             */
/*   Updated: 2023/09/07 12:30:19 by imbo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*dst;
	unsigned int i;

	slen = ft_strlen(s);
	if (start > slen)
		return (0);
	dst = (char *)malloc (len * sizeof(char));
	if (!dst)
		return (0);
	i = 0;
	while (s[start] && i < len - 1)
	{
		dst[i++] = s[start++];
	}
	dst[i] = '\0';
	return (dst);
}
