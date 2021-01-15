/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tacousti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 18:18:10 by tacousti          #+#    #+#             */
/*   Updated: 2020/11/22 18:18:13 by tacousti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	new_n;

	new_n = n;
	if (new_n < 0)
	{
		if (new_n == -2147483648)
		{
			ft_putstr_fd("-2147483648", fd);
			return ;
		}
		new_n = -1 * new_n;
		ft_putchar_fd('-', fd);
	}
	if (new_n >= 10)
		ft_putnbr_fd(new_n / 10, fd);
	ft_putchar_fd((char)(new_n % 10 + '0'), fd);
}
