/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboutadg <iboutadg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:24:03 by iboutadg          #+#    #+#             */
/*   Updated: 2023/11/06 19:37:15 by iboutadg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

// first part
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
size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
int		ft_strncmp(const char *str1, const char *str2, size_t size);
char	*ft_strnstr(const char *haystack, const char *needle, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strdup(const char *str);
void	*ft_calloc(size_t nmemb, size_t size);

// second part
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strtrim(const char *s1, const char *set);
char	**ft_split(const char *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(const char *s, int fd);
void	ft_putendl_fd(const char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

//bonus
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif //LIBFT_H
