/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imbo <imbo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 05:17:34 by imbo              #+#    #+#             */
/*   Updated: 2023/09/07 15:34:03 by imbo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

int		ft_atoi(const char *str);
void	ft_bzero(void *addr, size_t size);
int		ft_isalnum(int nbr);
int		ft_isalpha(int nbr);
int		ft_isascii(int nbr);
int		ft_isdigit(int nbr);
int		ft_isprint(int nbr);
void	*ft_memchr(const void *addr, int val, size_t size);
int		ft_memcmp(const void *addr1, const void *addr2, size_t size);
void	*ft_memmove(void *dest, const void *src, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t size);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memset(void *addr, int val, size_t size);
char	*ft_strchr(const char *str, int val);
char	*ft_strrchr(const char *str, int val);
int		ft_strlen(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
int		ft_strncmp(const char *str1, const char *str2, size_t size);
char	*ft_strnstr(const char *haystack, const char *needle, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strdup(char *str);
void	*ft_calloc(size_t nmemb, size_t size);
// first part
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
//strmapi needs to verify the ppurpose of the unsigned int
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
// second part

#endif //LIBFT_H
