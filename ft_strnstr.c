/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tacousti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 18:21:52 by tacousti          #+#    #+#             */
/*   Updated: 2020/11/22 18:21:57 by tacousti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	lu;

	lu = ft_strlen(little);
	if (!lu)
		return ((char *)big);
	while (*big && len >= lu && len--)
	{
		if (ft_strncmp(big, little, lu) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
