/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsutormi <dsutormi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:02:15 by dsutormi          #+#    #+#             */
/*   Updated: 2026/04/21 16:27:20 by dsutormi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*p;
	unsigned int	i;

	i = 0;
	p = (char *)s;
	while (*p)
	{
		p++;
		i++;
	}
	while (i > 0)
	{
		if (*p == (char)c)
			return (p);
		p--;
		i--;
	}
	if (*p == (char)c)
		return (p);
	return (NULL);
}
