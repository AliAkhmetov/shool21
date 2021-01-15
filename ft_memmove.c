/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tacousti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 05:20:30 by tacousti          #+#    #+#             */
/*   Updated: 2020/11/15 05:20:34 by tacousti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t len)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*src;

	dst = (unsigned char *)destination;
	src = (unsigned char *)source;
	i = 0;
	if (dst == NULL && src == NULL)
		return (dst);
	if (dst > src)
	{
		while (len--)
			(dst[len]) = (unsigned char)(src[len]);
	}
	else
	{
		while (len != i)
		{
			dst[i] = src[i];
			i++;
		}
	}
	return (dst);
}
