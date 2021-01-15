/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tacousti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 05:29:58 by tacousti          #+#    #+#             */
/*   Updated: 2020/11/15 05:30:44 by tacousti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	c;
	size_t			dst_ret;
	size_t			ret;

	dst_ret = 0;
	while (dst[dst_ret] != '\0' && dst_ret < dstsize)
		dst_ret++;
	ret = dst_ret + ft_strlen(src);
	c = ft_strlen(dst);
	if (dstsize == 0 || c > dstsize)
		return (ret);
	i = 0;
	while (c < (dstsize - 1) && src[i] != '\0')
	{
		dst[c] = src[i];
		i++;
		c++;
	}
	dst[c] = '\0';
	return (ret);
}
