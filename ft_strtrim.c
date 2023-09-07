/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imbo <imbo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:37:15 by imbo              #+#    #+#             */
/*   Updated: 2023/09/07 16:57:44 by imbo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_inset(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
		if (c == set[i++])
			return (1);
	return (0);
}

static size_t	index_not_in_set_from_start(char const *s1, char const *set)
{
	size_t	i;

	i = -1;
	while (s1[++i])
		if (!ft_inset(s1[i], set))
			return (i);
	return (i);
}

static size_t	index_not_in_set_from_end(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i])
		i++;
	while (--i >= 0)
		if (!ft_inset(s1[i], set))
			return (i);
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*dst;

	if (!s1)
		return (0);
	start = index_not_in_set_from_start(s1, set);
	end = index_not_in_set_from_end(s1, set);
	if (!s1[start])
		return ((char *)ft_calloc(1, sizeof(char)));
	dst = malloc((end - start + 1) * sizeof(char));
	i = 0;
	while (start <= end)
		dst[i++] = s1[start++];
	return (dst);
}
