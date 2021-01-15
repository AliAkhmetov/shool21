/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tacousti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 02:39:58 by tacousti          #+#    #+#             */
/*   Updated: 2020/11/15 02:39:59 by tacousti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		test(char b, char *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == b)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	end;
	unsigned int	r;
	char			*res;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	if (!s1[i])
		return (ft_strdup(""));
	end = ft_strlen(s1) - 1;
	r = 0;
	while (test(s1[i], (char *)set) == 1 && s1[i])
		i++;
	while (test(s1[end], (char *)set) == 1 && end > 1)
		end--;
	if (i >= end || !s1[0])
		return (ft_strdup(""));
	else
	{
		res = ft_substr(s1, i, (end - i + 1));
		if (res == NULL)
			return (NULL);
		return (res);
	}
}
