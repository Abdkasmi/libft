/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 14:56:17 by abkasmi           #+#    #+#             */
/*   Updated: 2021/09/09 10:53:34 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*cpy;
	const char	*str;
	size_t		i;

	if (!dest && !src)
		return (NULL);
	cpy = (char *)dest;
	str = (const char *)src;
	i = 0;
	while (i < n)
	{
		cpy[i] = str[i];
		i++;
	}
	return (dest);
}
