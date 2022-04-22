/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:47:06 by abkasmi           #+#    #+#             */
/*   Updated: 2021/09/10 12:43:30 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nv_element;

	nv_element = malloc(sizeof(t_list));
	if (!nv_element)
		return (NULL);
	nv_element->content = content;
	nv_element->next = NULL;
	return (nv_element);
}
