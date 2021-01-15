/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tacousti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 02:35:34 by tacousti          #+#    #+#             */
/*   Updated: 2020/11/15 02:35:37 by tacousti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	p;
	char			*res;

	if (str == NULL)
		return (NULL);
	if ((unsigned int)ft_strlen(str) > start)
	{
		res = (char *)malloc(len + 1);
		if (res == NULL)
			return (NULL);
		i = 0;
		p = 0;
		i = start;
		while (str[i] != '\0' && p < (unsigned int)len)
		{
			res[p] = str[i];
			i++;
			p++;
		}
		res[p] = '\0';
	}
	else
		return (ft_strdup(""));
	return (res);
}
