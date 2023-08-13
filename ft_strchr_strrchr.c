#include "libft.h"

char	*ft_strchr(char *str, int c)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		if (str[i++] == c)
			return (&str[i - 1]);
	if (c == 0)
		return (&str[i]);
	return (0);
}

char	*ft_strrchr(char *str, int c)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
		if  (str[i--] == c)
			return (&str[i + 1]);
	return (0);
}
