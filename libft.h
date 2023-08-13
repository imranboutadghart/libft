#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

int	ft_atoi(char *);
void	ft_bzero(void *, size_t);
int	ft_isalnum(int);
int	ft_isalpha(int);
int	ft_isascii(int);
int	ft_isdigit(int);
int	ft_isprint(int);
void	*ft_memchr(void *, int, size_t);
int	ft_memcmp(void *, void *, size_t);
void	*ft_memmove(void *, void *, size_t);
void	*ft_memcpy(void *, void *, size_t);
void *memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memset(void *, int, size_t);
char	*ft_strchr(char *, int);
char	*ft_strrchr(char *, int);
int	ft_strlen(char *);
size_t	ft_strlcat(char *, char *, size_t);
int	ft_strncmp(char *, char *, size_t);
char	*ft_strnstr(char *, char *, size_t);
int	ft_toupper(int);
int	ft_tolower(int);

#endif LIBFT_H