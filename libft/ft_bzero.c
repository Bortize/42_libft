/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 18:55:47 by bgomez-r          #+#    #+#             */
/*   Updated: 2021/03/23 15:22:50 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The bzero() function erases the data in the n bytes of the memory starting
** at the location pointed to by s, by writing zeros (bytes containing '\0')
** to that area.
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
