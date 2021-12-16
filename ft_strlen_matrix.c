/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_matrix.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42madrid.com>>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 16:22:35 by bgomez-r          #+#    #+#             */
/*   Updated: 2021/12/16 16:29:21 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns the length of an array of char *
*/

int ft_strlen_matrix(char **str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i][j])
		i++;
	return (i);
}
