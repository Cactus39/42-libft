/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsutormi <dsutormi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:39:39 by dsutormi          #+#    #+#             */
/*   Updated: 2026/04/24 21:16:00 by dsutormi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if ((size != 0) && ((0xFFFFFFFFFFFFFFFF / size) < nmemb))
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, size * nmemb);
	return (p);
}
