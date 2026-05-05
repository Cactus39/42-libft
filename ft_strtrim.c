/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsutormi <dsutormi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 13:00:04 by dsutormi          #+#    #+#             */
/*   Updated: 2026/05/04 16:51:49 by dsutormi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_start(char const *s1, char const *set)
{
	unsigned int	i;
	size_t			l;

	i = 0;
	l = ft_strlen(s1);
	while (i < l)
	{
		if (!ft_strchr(set, s1[i]))
			return (i);
		i++;
	}
	return (i);
}

static unsigned int	ft_end(char const *s1, char const *set)
{
	unsigned int	i;

	i = ft_strlen(s1);
	while (i > 0)
	{
		if (!ft_strchr(set, s1[i - 1]))
			return (i);
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*dest;
	unsigned int	start;
	unsigned int	end;
	size_t			l;

	l = ft_strlen(s1);
	end = 512;
	if ((s1 == NULL) || (set == NULL))
		return (NULL);
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	dest = ft_substr(s1, start, (end - start));
	return (dest);
}
