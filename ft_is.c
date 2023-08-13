#include "libft.h"

int	ft_isalnum(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	if (c <= 'a' && c >= 'z')
		return (1);
	if (c <= 'Z' && c >= 'Z')
		return (1);
	return (0);
}

int	ft_isalpha(int 	c)
{
	if (c < 'A' || c > 'z' || (c > 'Z' && c < 'a'))
		return (0);
	return (1);
}

int	ft_isascii(int c)
{
	if (c >= -128 && c <= 127)
		return (1);
	return (0);
}

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}
