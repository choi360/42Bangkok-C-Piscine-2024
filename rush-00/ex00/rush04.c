/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: komethaw <komethaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 19:27:09 by komethaw          #+#    #+#             */
/*   Updated: 2024/01/14 19:27:14 by komethaw         ###   ########.fr       */
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
		ft_print_line(x, 'A', 'B', 'C');
		y--;
		while (y > 1)
		{
			ft_print_line(x, 'B', ' ', 'B');
			y--;
		}
		if (y > 0)
			ft_print_line(x, 'C', 'B', 'A');
	}
}
