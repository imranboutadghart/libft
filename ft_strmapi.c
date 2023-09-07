/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imbo <imbo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:10:53 by imbo              #+#    #+#             */
/*   Updated: 2023/09/07 15:17:19 by imbo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	size;
	size_t	i;
	char	*str;

	size = ft_strlen(s);
	str = (char *)malloc ((size + 1) * sizeof(char));
	if (!str)
		return (str);
	i = 0;
	while (i < size)
	{
		str[i] = f(i, s[i]);
	}
	return (str);
}
