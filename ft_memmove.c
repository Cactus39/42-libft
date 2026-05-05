/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsutormi <dsutormi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:12:17 by dsutormi          #+#    #+#             */
/*   Updated: 2026/05/04 17:53:06 by dsutormi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (dest < src)
	{
		while (n-- > 0)
			*d++ = *s++;
	}
	if (dest > src)
	{
		d += (n - 1);
		s += (n - 1);
		while (n-- > 0)
			*d-- = *s--;
	}
	return (dest);
}
