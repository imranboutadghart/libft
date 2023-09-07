/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imbo <imbo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 05:24:40 by imbo              #+#    #+#             */
/*   Updated: 2023/09/07 15:10:34 by imbo             ###   ########.fr       */
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

int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count = 1;
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		digits;
	long	nb;

	nb = (long)n;
	digits = count_digits(n);
	str = (char *)malloc((digits + 1) * sizeof(char));
	str[digits] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	if (0 == nb)
		str[0] = '0';
	while (nb)
	{
		str[--digits] = nb % 10 + '0';
		nb /= 10;
	}
	return (str);
}
