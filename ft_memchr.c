/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsutormi <dsutormi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 19:35:37 by dsutormi          #+#    #+#             */
/*   Updated: 2026/04/23 20:37:27 by dsutormi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	b;

	p = (unsigned char *)s;
	b = (unsigned char)c;
	while (n > 0)
	{
		if (*p == b)
			return (p);
		p++;
		n--;
	}
	return (NULL);
}
