/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 15:41:20 by abkasmi           #+#    #+#             */
/*   Updated: 2021/09/09 15:34:55 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_int(int n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		n *= -1;
		count++;
		while (n > 9)
		{
			n /= 10;
			count++;
		}
		return (count);
	}
	else if (n > 0)
	{
		while (n > 9)
		{
			n /= 10;
			count++;
		}
		return (count);
	}
	return (count);
}

static char	*ft_int_to_array(int count, int n, char *str, int signe)
{
	while (n > 9)
	{
		str[count] = (n % 10) + 48;
		n = n / 10;
		count--;
	}
	str[count] = n + 48;
	if (signe == -1)
		str[--count] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char				*str;
	int					count;
	int					signe;

	signe = 1;
	count = len_int(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = malloc(sizeof(char) * (count + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		signe = -1;
		n = -n;
	}
	str[count] = '\0';
	count--;
	return (ft_int_to_array(count, n, str, signe));
}
