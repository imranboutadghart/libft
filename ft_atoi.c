/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imbo <imbo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 05:24:40 by imbo              #+#    #+#             */
/*   Updated: 2023/09/06 06:00:44 by imbo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	long	result;
	int		sign;

	i = 0;
	sign = 1;
	result = 0;
	while (' ' == str[i] || '\f' == str[i] || '\n' == str[i] 
		|| '\r' == str[i] || '\t' == str[i] || '\v' == str[i])
		i++;
	if ('+' == str[i] || '-' == str[i])
		if ('-' == str[i++])
			sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
		result = result * 10 + str[i++] - '0';
	return ((int )(sign * result));
}
