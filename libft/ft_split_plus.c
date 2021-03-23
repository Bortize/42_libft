/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_plus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 18:28:45 by bortize           #+#    #+#             */
/*   Updated: 2021/03/23 15:38:56 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function removes from the string the characters passed by parameter,
** and returns an array of strings resulting from the division by the removed
** character. Its operation is the same as split only that it receives 2
** characters instead of one.
*/

static int	ft_countword(char const *s, char c, char t)
{
	unsigned int	i;
	int				words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c || s[i] == t)
			i++;
		if (s[i] != '\0')
			words++;
		while (s[i] && ((s[i] != c) && (s[i] != t)))
			i++;
	}
	return (words);
}

static char	*ft_wordcopy(const char *s, size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * n + 1);
	if (!str)
		return (NULL);
	str = ft_strncpy(str, s, n);
	str[n] = '\0';
	return (str);
}

char	**ft_split_plus(char const *s, char c, char t)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	if (!s)
		return (NULL);
	i = 0;
	k = 0;
	tab = (char **)malloc(sizeof(char *) * (ft_countword(s, c, t)) + 1);
	if (!tab)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c || s[i] == t)
			i++;
		j = i;
		while (s[i] && ((s[i] != c) && (s[i] != t)))
			i++;
		if (i > j)
		{
			tab[k++] = ft_wordcopy(s + j, i - j);
		}
	}
	tab[k] = NULL;
	return (tab);
}
