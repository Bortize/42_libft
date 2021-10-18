/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 13:39:26 by bgomez-r          #+#    #+#             */
/*   Updated: 2021/10/18 15:52:19 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	if (!(lst && f))
		return (NULL);
	list = ft_lstnew(f(lst->content));
	lst = lst->next;
	while (lst)
	{
		map = ft_lstnew(f(lst->content));
		if (!(map))
		{
			ft_lstdelone(list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, map);
		lst = lst->next;
	}
	return (list);
}
