/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tacousti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 03:43:29 by tacousti          #+#    #+#             */
/*   Updated: 2020/11/15 03:43:31 by tacousti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	max_or_min_check(long count)
{
	if (count > 2147483647)
		return (-1);
	else if (count < -2147483648)
		return (0);
	else
		return (1);
}

int	ft_atoi(const char *str)
{
	int		i;
	long	count;
	int		minus;

	count = 0;
	i = 0;
	minus = 1;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\f' ||
		str[i] == '\r' || str[i] == '\n' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		minus = (str[i] == '-') ? (-1) : (1);
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		count = 10 * count + (str[i] - 48);
		if (max_or_min_check(count * minus) != 1)
			return (max_or_min_check(count * minus));
		i++;
	}
	return ((int)(count * minus));
}
