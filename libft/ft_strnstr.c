/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 11:33:13 by abkasmi           #+#    #+#             */
/*   Updated: 2021/09/09 12:21:12 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	char	*str;
	char	*to_find;

	str = (char *)s1;
	to_find = (char *)s2;
	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] && i < n)
	{
		j = 0;
		while (to_find[j] == str[i + j] && i + j < n && to_find[j])
			j++;
		if (!to_find[j])
			return (&str[i]);
		i++;
	}
	return (NULL);
}
