/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsutormi <dsutormi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 20:58:31 by dsutormi          #+#    #+#             */
/*   Updated: 2026/04/24 21:23:04 by dsutormi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*p;
	size_t		l1;
	size_t		l2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	p = ft_calloc((l1 + l2 + 1), sizeof(char));
	if (p == NULL)
		return (NULL);
	ft_strlcpy(p, s1, l1 + 1);
	ft_strlcat(p, s2, l1 + l2 + 1);
	return (p);
}
