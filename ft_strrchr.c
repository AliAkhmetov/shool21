/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tacousti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 05:42:29 by tacousti          #+#    #+#             */
/*   Updated: 2020/11/15 05:42:31 by tacousti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	if (c == '\0')
		return (&((char *)s)[len]);
	while (len > 0)
	{
		if ((s[len - 1]) == c)
			return (&((char *)s)[len - 1]);
		len--;
	}
	return (NULL);
}
