/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 15:46:42 by abkasmi           #+#    #+#             */
/*   Updated: 2021/09/09 10:57:28 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest2;
	const char	*src2;
	size_t		i;

	if (!dest && !src)
		return (NULL);
	dest2 = (char *)dest;
	src2 = (const char *)src;
	i = -1;
	if (src2 < dest2)
	{
		while (n > 0)
		{
			dest2[n - 1] = src2[n - 1];
			n--;
		}
	}
	else
	{		
		while (++i < n)
			dest2[i] = src2[i];
	}
	return (dest);
}
