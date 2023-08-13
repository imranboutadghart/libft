#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1 && s2 && s1[i] == s2[i] && i < n)
		i++;
	return (s1[i] - s2[i]);
}
