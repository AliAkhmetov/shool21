/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tacousti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 02:24:32 by tacousti          #+#    #+#             */
/*   Updated: 2020/11/15 02:24:38 by tacousti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	len_of_numb(int numb)
{
	int	a;

	if (numb == 0)
		return (1);
	a = 0;
	if (numb < 0)
		a++;
	while (numb != 0)
	{
		numb = numb / 10;
		a++;
	}
	return (a);
}

char	*int_to_chars(int numb, int len, char *res)
{
	long n;

	res[len] = '\0';
	if (numb < 0)
	{
		res[0] = '-';
		n = numb;
		n = -n;
	}
	else
	{
		n = numb;
		res[0] = '0';
	}
	while (n > 0)
	{
		res[--len] = (n % 10) + 48;
		n = n / 10;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	size_t	len;

	len = len_of_numb(n);
	res = ft_calloc(len + 1, sizeof(char));
	if (res == NULL)
		return (NULL);
	res = int_to_chars(n, len, res);
	return (res);
}
