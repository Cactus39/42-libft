/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsutormi <dsutormi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 21:22:41 by dsutormi          #+#    #+#             */
/*   Updated: 2026/05/04 17:23:16 by dsutormi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			src_len;
	unsigned int	i;
	char			*dest;
	unsigned int	j;

	i = 0;
	j = start;
	src_len = ft_strlen(s);
	if (start >= src_len)
		return (ft_strdup(""));
	if (len < (src_len - start))
		dest = malloc(sizeof(char) * ((len) + 1));
	else
		dest = malloc(sizeof(char) * ((src_len - start) + 1));
	if (s == NULL || dest == NULL)
		return (NULL);
	while ((s[i] != '\0') && (len > 0))
	{
		dest[i++] = s[j++];
		len--;
	}
	dest[i] = '\0';
	return (dest);
}
