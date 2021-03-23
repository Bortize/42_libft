/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:37:54 by bgomez-r          #+#    #+#             */
/*   Updated: 2021/03/23 15:23:48 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The calloc() function in C is used to allocate a specified amount of memory
** and then initialize it to zero. The function returns a void pointer to this
** memory location, which can then be cast to the desired type. The function
** takes in two parameters that collectively specify the amount of memory to
** be allocated.
*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr)
		ft_memset(ptr, 0, (count * size));
	return (ptr);
}
