/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsutormi <dsutormi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 18:57:39 by dsutormi          #+#    #+#             */
/*   Updated: 2026/05/04 15:23:21 by dsutormi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if ((dest == NULL) && (src == NULL))
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n-- > 0)
		*d++ = *s++;
	return (dest);
}
