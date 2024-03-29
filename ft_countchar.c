/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 21:36:11 by bgomez-r          #+#    #+#             */
/*   Updated: 2021/10/18 15:54:38 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Checks the number of times the character passed
** as a parameter appears in a string.
*/

int	ft_countchar(char *str, char c)
{
	int	i;
	int	u;

	i = 0;
	u = 0;
	while (str[i])
	{
		u += (str[i] == c);
		i++;
	}
	return (u);
}
