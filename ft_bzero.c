/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsutormi <dsutormi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 12:15:37 by dsutormi          #+#    #+#             */
/*   Updated: 2026/04/27 17:24:00 by dsutormi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*long_write(char *p, size_t *n)
{
	size_t		*st_p;
	size_t		local_n;

	local_n = *n;
	st_p = (size_t *)p;
	while (local_n > 8 * 8)
	{
		st_p[0] = 0;
		st_p[1] = 0;
		st_p[2] = 0;
		st_p[3] = 0;
		st_p[4] = 0;
		st_p[5] = 0;
		st_p[6] = 0;
		st_p[7] = 0;
		st_p += 8;
		local_n = local_n - 8 * 8;
	}
	*n = local_n;
	return ((char *)st_p);
}

void	ft_bzero(void *s, size_t nn)
{
	char		*p;
	size_t		n;

	p = (char *)s;
	n = nn;
	while ((((size_t)p) & 7) && (n > 8))
	{
		*p = 0;
		p++;
		n--;
	}
	p = long_write(p, &n);
	while (n > 0)
	{
		*p = 0;
		p++;
		n--;
	}
}
