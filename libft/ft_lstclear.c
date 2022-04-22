/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 12:10:38 by abkasmi           #+#    #+#             */
/*   Updated: 2021/09/10 12:18:14 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst2;
	t_list	*elem;

	if (!lst || !del)
		return ;
	lst2 = *lst;
	while (lst2)
	{
		elem = lst2->next;
		del(lst2->content);
		free(lst2);
		lst2 = elem;
	}
	*lst = NULL;
}
