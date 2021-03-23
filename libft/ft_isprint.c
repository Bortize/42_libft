/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 16:50:16 by bgomez-r          #+#    #+#             */
/*   Updated: 2021/03/23 15:33:16 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The isprint() function checks whether a character is a printable character
** or not.Function isprint() takes a single argument in the form of an integer
** and returns a value of type int.Even though, isprint() takes integer as an
** argument, character is passed to the function. Internally, the character is
** converted to its ASCII value for the check.
*/

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}
