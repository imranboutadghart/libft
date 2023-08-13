#include "libft.h"

int	ft_atoi(char *str)
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
