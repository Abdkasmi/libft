/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 11:12:25 by abkasmi           #+#    #+#             */
/*   Updated: 2021/09/09 11:04:23 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n <= 0)
		return (0);
	while (i < n - 1 && str1[i] == str2[i])
		i++;
	if (i == n && str1[i] == str2[i])
		return (str2[i] - str1[i]);
	return (str1[i] - str2[i]);
}
