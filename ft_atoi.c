/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsutormi <dsutormi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:44:31 by dsutormi          #+#    #+#             */
/*   Updated: 2026/05/04 18:21:37 by dsutormi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_line(const char *str)
{
	if ((*str == ' ') || ('\t' <= *str && *str <= '\r'))
		return (1);
	return (0);
}

static int	ft_check_sign(const char *str)
{
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			return (-1);
		else
			return (1);
	}
	if ('0' <= *str && *str <= '9')
		return (0);
	return (0);
}

static int	ft_create_int(const char *str)
{
	int		res;

	res = 0;
	while ('0' <= *str && *str <= '9')
	{
		res *= 10;
		res += *str - '0';
		str++;
	}
	return (res);
}

int	ft_atoi(const char *str)
{
	int			res;
	int			sign;

	sign = 1;
	res = 0;
	while (*str)
	{
		if (ft_check_line(str))
			str++;
		else
			break ;
	}
	if (ft_check_sign(str))
	{
		sign *= ft_check_sign(str);
		str++;
	}
	res = ft_create_int(str);
	res = res * sign;
	return (res);
}
