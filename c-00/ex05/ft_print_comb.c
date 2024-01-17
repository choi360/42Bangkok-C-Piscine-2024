/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: komethaw <komethaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:30:14 by komethaw          #+#    #+#             */
/*   Updated: 2024/01/17 17:30:18 by komethaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_print_comb(void)
{
	char	num[4];

	num[0] = '0';
	num[3] = '\0';
	while (num[0] <= '7')
	{
		num[1] = num[0] + 1;
		while (num[1] <= '8')
		{
			num[2] = num[1] + 1;
			while (num[2] <= '9')
			{
				ft_putstr(num);
				if (num[0] == '7' && num[1] == '8' && num[2] == '9')
				{
					return ;
				}
				ft_putstr(", ");
				num[2]++;
			}
			num[1]++;
		}
		num[0]++;
	}
}
