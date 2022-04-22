/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 10:00:49 by abkasmi           #+#    #+#             */
/*   Updated: 2021/09/09 14:45:24 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char			*str;
	int				count;
	int				j;
	unsigned char	b;

	count = 0;
	b = (unsigned char)c;
	str = (char *)s;
	while (str[count])
		count++;
	j = count;
	if (b == '\0')
		return (&str[j]);
	while (j >= 0)
	{
		if (str[j] == b)
			return (&str[j]);
		j--;
	}
	return (0);
}
