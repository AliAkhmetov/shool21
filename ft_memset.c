/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tacousti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 18:30:25 by tacousti          #+#    #+#             */
/*   Updated: 2020/11/07 18:30:32 by tacousti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *destination, int c, size_t n)
{
	unsigned int i;

	i = 0;
	while (n > i)
	{
		((unsigned char *)destination)[i] = (unsigned char)c;
		i++;
	}
	return (destination);
}
