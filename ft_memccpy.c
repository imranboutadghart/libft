#include "libft.h"

void *memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*dtmp;
	char	*stmp;
	size_t	i;

	dtmp = (char *)dest;
	stmp = (char *)src;
	i = 0;
	while (i < n && *stmp != c)
	{
		*dtmp = *stmp;
		i++;
		dtmp++;
		stmp++;
	}
	if (*stmp == c)
	{
		*dtmp = *stmp;
		return (stmp + 1);
	}
	return (NULL);
}
