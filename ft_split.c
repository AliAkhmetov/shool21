/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tacousti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 18:21:05 by tacousti          #+#    #+#             */
/*   Updated: 2020/11/22 18:21:07 by tacousti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_of_splits(char *s, char c)
{
	int i;
	int b;

	i = 0;
	b = 0;
	while (s[i])
	{
		while (s[i] != c && s[i])
			i++;
		while (s[i] == c && s[i])
			i++;
		b++;
	}
	return (b);
}

char	**free_mem(char **res, int r)
{
	while (r >= 0)
	{
		free(res[r]);
		r--;
	}
	free(res);
	return (NULL);
}

char	**put_words(char **res, char *s, char c, int r)
{
	int		i;
	size_t	len;
	int		start;

	i = 0;
	while (s[i])
	{
		len = 0;
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i] && ++len)
		{
			if (s[i + 1] == c || !s[i + 1])
			{
				res[r] = ft_substr(s, start, len);
				if (res[r] == NULL)
					return (free_mem(res, r));
				r++;
			}
			i++;
		}
	}
	res[r] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	int		b;
	int		r;
	char	**res;

	r = 0;
	if (!s)
		return (NULL);
	b = count_of_splits((char *)s, c);
	res = (char **)malloc((b + 1) * sizeof(char*));
	if (!res)
		return (NULL);
	if (put_words(res, (char *)s, c, r) == NULL)
		return (NULL);
	return (res);
}
