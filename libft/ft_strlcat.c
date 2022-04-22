/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 16:22:39 by abkasmi           #+#    #+#             */
/*   Updated: 2021/09/09 13:49:15 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	ln_dest;
	size_t	ln_src;

	i = 0;
	ln_dest = 0;
	ln_src = 0;
	while (dest[ln_dest])
		ln_dest++;
	while (src[ln_src])
		ln_src++;
	if (size == 0 || size <= ln_dest)
		return (ln_src + size);
	while (i < ln_src && i < size - ln_dest - 1)
	{
		dest[ln_dest + i] = src[i];
		i++;
	}
	dest[ln_dest + i] = '\0';
	return (ln_dest + ln_src);
}
