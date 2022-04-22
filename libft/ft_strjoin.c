/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 14:46:06 by abkasmi           #+#    #+#             */
/*   Updated: 2021/09/09 13:15:03 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*strs;
	char	*nv_str;
	int		i;
	int		j;

	i = -1;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	str = (char *)s1;
	strs = (char *)s2;
	nv_str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	if (!nv_str || !s1 || !s2)
		return (NULL);
	while (str[++i])
		nv_str[i] = str[i];
	while (strs[j])
	{
		nv_str[i] = strs[j];
		i++;
		j++;
	}
	nv_str[i] = '\0';
	return (nv_str);
}
