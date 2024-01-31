/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_rewrite2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plesukja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:18:56 by plesukja          #+#    #+#             */
/*   Updated: 2024/01/27 15:40:43 by plesukja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb >= 0 && nb <= 9)
	{
		c = nb + '0';
		write (1, &c, 1);
	}
	if (nb < 0)
	{
		write (1, "-", 1);
		if (nb < -9)
			ft_putnbr ((nb / 10) * -1);
		ft_putnbr ((nb % 10) * -1);
	}
	else if (nb > 9)
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
}
/*
int main(void)
{
	ft_putnbr(2147483647);
	ft_putnbr(-2147483648);
	ft_putnbr(0);
	ft_putnbr(-2);
}
*/
