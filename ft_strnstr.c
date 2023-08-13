#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	if (!needle || !haystack)
		return (haystack);
	i = 0;
	while (haystack[i] && i < n)
	{
		j = 0;
		while (needle[j] && haystack[i + j] && haystack[i + j] == needle[j])
			j++;
		if (!needle[j])
			return (&haystack[i]);
		i++;
	}
	return (0);
}
