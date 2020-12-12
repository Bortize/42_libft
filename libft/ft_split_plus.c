/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_plus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bortize <bortize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 18:28:45 by bortize           #+#    #+#             */
/*   Updated: 2020/12/12 18:50:12 by bortize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_countword(char const *s, char c, char t)
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

static char			*ft_wordcopy(const char *s, size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * n + 1);
	if (!str)
		return (NULL);
	str = ft_strncpy(str, s, n);
	str[n] = '\0';
	return (str);
}

char				**ft_split_plus(char const *s, char c, char t)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	if (!s)
		return (NULL);
	i = 0;
	k = 0;
	if (!(tab = (char **)malloc(sizeof(char *) * (ft_countword(s, c, t)) + 1)))
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
