/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsutormi <dsutormi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:16:44 by dsutormi          #+#    #+#             */
/*   Updated: 2026/05/04 15:34:57 by dsutormi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	int				diff;

	diff = 0;
	i = 0;
	while ((s1[i] || s2[i]) & (i < n))
	{
		diff = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
		if (diff != 0)
			return (diff);
	}
	return (0);
}
