/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 14:33:00 by abkasmi           #+#    #+#             */
/*   Updated: 2021/09/09 15:19:54 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	char			*nv_str;
	unsigned int	i;

	if (!s)
		return (NULL);
	str = (char *)s;
	if (start >= ft_strlen(s))
		len = 0;
	if ((ft_strlen(s) - start) < len)
		nv_str = malloc(sizeof(char) * ((ft_strlen(s) - start) + 1));
	else
		nv_str = malloc(sizeof(char) * (len + 1));
	if (!nv_str)
		return (NULL);
	i = 0;
	while (i < len && s[i])
	{
		nv_str[i] = str[start];
		start++;
		i++;
	}
	nv_str[i] = '\0';
	return (nv_str);
}
