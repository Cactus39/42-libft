/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsutormi <dsutormi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 18:56:54 by dsutormi          #+#    #+#             */
/*   Updated: 2026/05/04 18:01:13 by dsutormi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// if (ft_strlen(little) > len)
	// 	return (NULL);

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	if (!(*little))
		return ((char *)big);
	while (*big && (len > 0))
	{
		i = 0;
		j = len;
		while ((little[i] == big[i]) && j > 0)
		{
			if (little[i] == '\0')
				return ((char *)big);
			j--;
			i++;
			if (!(little[i]))
				return ((char *)big);
		}
		big++;
		len--;
	}
	return (NULL);
}
