#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	size_t	i;
	int		*arr;

	arr = (int *)s;
	i = 0;
	while (i < n)
		if (arr[i] == c)
			return (&arr[i]);
	return (0);
}

int	ft_memcmp(void *s1, void *s2, size_t n)
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

void	*ft_memmove(void *dest, void *src, size_t n)
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
	return (dest);
}

void	*ft_memcpy(void *dest, void *src, size_t n)
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
	int		*arr;

	arr = (int *)s;
	i = 0;
	while (i < n)
		arr[i++] = c;
	return (s);
}
