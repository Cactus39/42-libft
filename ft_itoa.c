/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsutormi <dsutormi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 15:32:42 by dsutormi          #+#    #+#             */
/*   Updated: 2026/05/04 21:49:04 by dsutormi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numlen(long int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static char	*ft_return_string(char *dest, long int num, size_t len, int sign)
{
	dest[len] = '\0';
	len--;
	while (num > 9)
	{
		dest[len] = (num % 10) + '0';
		len--;
		num = num / 10;
	}
	dest[len] = (num % 10) + '0';
	if (sign == -1)
		dest[0] = '-';
	return (dest);
}

char	*ft_itoa(int n)
{
	int				sign;
	long int		buff;
	char			*res;
	size_t			len;

	sign = 1;
	buff = (long int)n;
	len = ft_numlen(buff);
	if (buff < 0)
	{
		sign = -1;
		buff *= -1;
	}
	res = malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	res = ft_return_string(res, buff, len, sign);
	return (res);
}
