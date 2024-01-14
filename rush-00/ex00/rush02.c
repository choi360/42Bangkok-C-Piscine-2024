/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: warcharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:59:53 by warcharo          #+#    #+#             */
/*   Updated: 2024/01/14 19:16:44 by komethaw         ###   ########.fr       */
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
		ft_print_line(x, 'A', 'B', 'A');
		y--;
		while (y > 1)
		{
			ft_print_line(x, 'B', ' ', 'B');
			y--;
		}
		if (y > 0)
			ft_print_line(x, 'C', 'B', 'C');
	}
}
