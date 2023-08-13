#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	slen;
	size_t	dlen;
	size_t	i;

	i = 0;
	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	if (dstsize <= dlen)
		return (slen + dstsize);
	while (src[i] && dlen + i + 1 < dstsize)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}
size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	slen;
	size_t	i;

	i = 0;
	slen = ft_strlen(src);
	while (slen && slen[i] && i < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	return (slen);
}
