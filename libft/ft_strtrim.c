/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 12:49:34 by abkasmi           #+#    #+#             */
/*   Updated: 2021/09/09 15:36:08 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	debut_str(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (set[j])
	{
		if (s1[i] == set[j])
		{
			i++;
			j = -1;
		}
		j++;
	}
	return (i);
}

static int	fin_str(char const *s1, char const *set)
{
	int	i;
	int	j;

	j = 0;
	i = ft_strlen(s1) - 1;
	while (set[j])
	{
		if (s1[i] == set[j])
		{
			i--;
			j = -1;
		}
		j++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		debut;
	int		len;
	char	*str_trim;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	len = (fin_str(s1, set) - debut_str(s1, set)) + 1;
	if (len < 0)
		str_trim = malloc(1);
	else
		str_trim = malloc(sizeof(char) * (len + 1));
	if (!str_trim)
		return (NULL);
	debut = debut_str(s1, set);
	while (i < len && len > 0)
	{
		str_trim[i] = s1[debut];
		i++;
		debut++;
	}
	str_trim[i] = '\0';
	return (str_trim);
}
