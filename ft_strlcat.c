/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsutormi <dsutormi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 21:02:49 by dsutormi          #+#    #+#             */
/*   Updated: 2026/04/23 12:06:25 by dsutormi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (!size)
		return (src_len + size);
	if (dst_len >= size)
		return (src_len + size);
	while (*dst)
	{
		dst++;
		size--;
	}
	while (*src && (size > 1))
	{
		*dst = *src;
		src++;
		dst++;
		size--;
	}
	*dst = '\0';
	return (src_len + dst_len);
}
