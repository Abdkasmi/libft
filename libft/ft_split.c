/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 14:46:58 by abkasmi           #+#    #+#             */
/*   Updated: 2021/09/09 15:35:26 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **matrice, int i)
{
	i--;
	while (i >= 0)
	{
		free(matrice[i]);
		i--;
	}
	free(matrice);
	return (NULL);
}

static int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
		{
			i++;
			if (s[i] == '\0')
				return (count);
		}
		count++;
		while (s[i] != c)
		{
			i++;
			if (s[i] == '\0')
				return (count);
		}
	}
	return (count);
}

static char	**split2(size_t nb_words, char const *s, char **matrice, char c)
{
	size_t	i;
	size_t	j;
	size_t	debut;

	i = 0;
	j = 0;
	while (i < nb_words)
	{
		while (s[j] == c)
			j++;
		debut = j;
		while (s[debut + 1] != c && s[debut + 1] != '\0')
			debut++;
		matrice[i] = ft_substr(s, j, (debut - j + 1));
		if (!matrice[i])
			return (ft_free(matrice, i));
		j = debut + 1;
		i++;
	}
	matrice[i] = 0;
	return (matrice);
}

char	**ft_split(char const *s, char c)
{
	char		**matrice;
	char		**matrice2;
	size_t		nb_words;
	size_t		i;
	size_t		j;

	j = 0;
	i = 0;
	if (!s)
		return (NULL);
	nb_words = count_words(s, c);
	matrice = malloc(sizeof(char *) * (nb_words + 1));
	if (!matrice)
		return (NULL);
	matrice2 = split2(nb_words, s, matrice, c);
	return (matrice2);
}
