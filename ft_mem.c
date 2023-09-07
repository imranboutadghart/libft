/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imbo <imbo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 05:24:55 by imbo              #+#    #+#             */
/*   Updated: 2023/09/07 11:51:30 by imbo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	void	*s2;

	s2 = (void *)s;
	i = 0;
	while (i < n)
	{
		if (*((int *)s2) == c)
			return (s2);
		i++;
		s2++;
	}
	return (0);
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && *(char *)s1 == *(char *)s2)
	{
		i++;
		s1++;
		s2++;
	}
	return (*(char *)s1 - *(char *)s2);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dtmp;
	char	*stmp;
	size_t	i;

	dtmp = (char *)dest;
	stmp = (char *)malloc(n);
	i = 0;
	while (i < n)
	{
		*stmp = *(char *)src;
		i++;
		src++;
		stmp++;
	}
	stmp -= n;
	while (i > 0)
	{
		*dtmp = *stmp;
		i--;
		dtmp++;
		stmp++;
	}
	free(stmp);
	return (dest);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dtmp;
	char	*stmp;
	size_t	i;

	dtmp = (char *)dest;
	stmp = (char *)src;
	i = 0;
	while (i < n)
	{
		*dtmp = *stmp;
		i++;
		dtmp++;
		stmp++;
	}
	return (dest);
}

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*arr;

	arr = (char *)s;
	i = 0;
	while (i < n)
		arr[i++] = (char )c;
	return (s);
}
