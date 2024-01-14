/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsmeyer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 19:44:20 by stsmeyer          #+#    #+#             */
/*   Updated: 2024/01/14 19:45:06 by komethaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_line(int x, char beginchar, char midchar, char endchar)
{
	ft_putchar(beginchar);
	while ((x - 1) > 1)
	{
		ft_putchar(midchar);
		x--;
	}
	if (x > 1)
		ft_putchar(endchar);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_print_line(x, '/', '*', '\\');
		y--;
		while (y > 1)
		{
			ft_print_line(x, '*', ' ', '*');
			y--;
		}
		if (y > 0)
			ft_print_line(x, '\\', '*', '/');
	}
}
