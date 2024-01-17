/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmethawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:23:41 by kmethawa          #+#    #+#             */
/*   Updated: 2021/10/28 00:12:24 by kmethawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_f_s_l(int f, int s, int l)
{
	ft_putchar((f / 10) + '0');
	ft_putchar((f % 10) + '0');
	ft_putchar(' ');
	ft_putchar((s / 10) + '0');
	ft_putchar((s % 10) + '0');
	if (l != 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	l;

	a = 0;
	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			if (a == 98 && b == 99)
			{
				l = 1;
			}
			else
			{
				l = 0;
			}
			print_f_s_l(a, b, l);
			b++;
		}
		a++;
	}
}
