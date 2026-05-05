/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsutormi <dsutormi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:27:47 by dsutormi          #+#    #+#             */
/*   Updated: 2026/04/22 18:07:54 by dsutormi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word_count(char const *p, char c)
{
	int	wc;
	int	flag;

	wc = 0;
	while (*p)
	{
		while ((*p == c) && (*p != '\0'))
		{
			flag = 0;
			p++;
		}
		while ((*p != c) && (*p != '\0'))
		{
			p++;
			flag = 1;
		}
		if (flag)
			wc++;
	}
	return (wc);
}

int	ft_word_len(char const *p, char c)
{
	int	wl;
	int	flag;

	flag = 0;
	wl = 0;
	while ((*p == c) && (*p != '\0'))
		p++;
	while ((*p != c) && (*p != '\0'))
	{
		flag = 1;
		wl++;
		p++;
	}
	return (wl);
}

char	**ft_free_split(char **arr, int i)
{
	while (i > 0)
	{
		free(arr[i - 1]);
		i--;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *p, char c)
{
	unsigned int	i;
	unsigned int	wl;
	unsigned int	wc;
	char			**arr;

	i = 0;
	wc = ft_word_count(p, c);
	arr = malloc(sizeof(char *) * (wc + 1));
	if (arr == NULL)
		return (ft_free_split(arr, i));
	while ((i < wc) && *p)
	{
		while ((*p == c) && (*p != '\0'))
			p++;
		wl = ft_word_len(p, c);
		arr[i] = malloc(sizeof(char) * (wl + 1));
		if (arr[i] == NULL)
			return (ft_free_split(arr, i));
		ft_strlcpy(arr[i++], p, wl + 1);
		while ((*p != c) && (*p != '\0'))
			p++;
	}
	arr[i] = NULL;
	return (arr);
}
