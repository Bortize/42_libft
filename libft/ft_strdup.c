/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 02:00:55 by borjagrd          #+#    #+#             */
/*   Updated: 2021/03/23 15:19:23 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strdup() function returns a pointer to a new string which is a
** duplicate of the string s. Memory for the new string is obtained with
** malloc(3), and can be freed with free(3). The strndup() function is
** similar, but copies at most n bytes.
*/

char	*ft_strdup(const char *s1)
{
	char	*s1_cpy;
	size_t	len_s1;

	len_s1 = ft_strlen(s1);
	s1_cpy = (char *)malloc(sizeof(char) * (len_s1 + 1));
	if (s1_cpy == 0)
		return (NULL);
	return (ft_strcpy(s1_cpy, s1));
}
