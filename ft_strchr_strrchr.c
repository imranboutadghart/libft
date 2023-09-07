/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_strrchr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imbo <imbo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 05:25:05 by imbo              #+#    #+#             */
/*   Updated: 2023/09/07 09:47:03 by imbo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		if (str[i++] == c)
			return ((char *)&str[i - 1]);
	if (c == 0)
		return ((char *)&str[i]);
	return (0);
}

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
		if (str[i--] == c)
			return ((char *)&str[i + 1]);
	return (0);
}
