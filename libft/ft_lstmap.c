/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 12:21:16 by abkasmi           #+#    #+#             */
/*   Updated: 2021/09/10 13:39:14 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst2;
	t_list	*elem;
	t_list	*prev;

	if (!lst || !f)
		return (NULL);
	lst2 = ft_lstnew(f(lst->content));
	elem = lst2;
	while (lst->next)
	{
		lst = lst->next;
		prev = elem;
		elem = ft_lstnew(f(lst->content));
		if (!elem)
		{
			ft_lstclear(&lst2, del);
			return (NULL);
		}
		prev->next = elem;
	}
	return (lst2);
}
