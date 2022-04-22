/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 09:44:30 by abkasmi           #+#    #+#             */
/*   Updated: 2021/09/10 14:54:16 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int				i;
	char			*str;
	unsigned char	b;

	b = (unsigned char)c;
	str = (char *)s;
	i = 0;
	while (str[i])
		i++;
	if (b == '\0')
		return (&str[i]);
	i = 0;
	while (str[i])
	{
		if (str[i] == b)
			return (&str[i]);
		i++;
	}
	return (0);
}
