/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tacousti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 15:12:02 by tacousti          #+#    #+#             */
/*   Updated: 2020/11/08 15:12:08 by tacousti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *destination, const void *source, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*des;
	unsigned char	*s;

	des = (unsigned char *)destination;
	s = (unsigned char *)source;
	i = 0;
	while (n > i)
	{
		des[i] = s[i];
		if (s[i] == (unsigned char)c)
			return (&((void *)des)[i + 1]);
		i++;
	}
	return (NULL);
}
