/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imbo <imbo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:33:34 by imbo              #+#    #+#             */
/*   Updated: 2023/09/07 14:40:33 by imbo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(const char *s, char c)
{
	int	flag;
	int	i;
	int	count;

	flag = 0;
	i = 0;
	count = 0;
	while (s[i])
	{
		if (!flag && s[i] != c)
			flag = ++count;
		if (flag && s[i] == c)
			flag = 0;
		i++;
	}
	return (count);
}

size_t	count_word_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	word_count;
	char	**strs;
	size_t	i;
	size_t	j;
	size_t	word_len;

	word_count = count_words(s, c);
	strs = (char **)malloc((word_count + 1) * sizeof(char *));
	i = -1;
	j = 0;
	while (++i < word_count)
	{
		while (s[j] && s[j] == c)
			j++;
		if (!s[j])
			break ;
		word_len = count_word_len(&(s[j]), c);
		strs[i] = malloc((word_len + 1) * sizeof(char));
		ft_strlcpy(strs[i], &(s[j]), word_len + 1);
		j += word_len;
	}
	strs[i] = 0;
	return (strs);
}
