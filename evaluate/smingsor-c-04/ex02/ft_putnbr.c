/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smingsor <smingsor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:24:08 by smingsor          #+#    #+#             */
/*   Updated: 2024/01/30 13:34:42 by smingsor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	i;

	i = nb;
	if (i == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (i < 0)
	{
		ft_putchar('-');
		i = -i;
	}
	if (i > 9)
		ft_putnbr(i / 10);
	ft_putchar(i % 10 + '0');
}

// int main()
// {
// 	int nb = 42999;
// 	ft_putnbr(nb);
// }