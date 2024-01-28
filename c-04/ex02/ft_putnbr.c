/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: komethaw <komethaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:58:54 by komethaw          #+#    #+#             */
/*   Updated: 2024/01/27 17:01:06 by komethaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reversed(int nb)
{
	if (nb >= 10)
		ft_print_reversed(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	ft_print_reversed(nb);
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}
*/
