/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsutormi <dsutormi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 13:40:34 by dsutormi          #+#    #+#             */
/*   Updated: 2026/05/04 15:28:54 by dsutormi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int			i;
	const unsigned char		*p1;
	const unsigned char		*p2;
	int						diff;

	i = 0;
	diff = 0;
	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (i < n)
	{
		diff = p1[i] - p2[i];
		if (diff)
			return (diff);
		i++;
	}
	return (0);
}
