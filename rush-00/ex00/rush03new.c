/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsomrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:37:21 by lsomrat           #+#    #+#             */
/*   Updated: 2021/10/24 18:10:10 by lsomrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define LEFT_CORNER_CHAR 'A'
#define RIGHT_CORNER_CHAR 'C'
#define VERTICAL_SIDE_CHAR 'B'
#define HORIZONTAL_SIDE_CHAR 'B'

void	ft_putchar(char c);

void	ft_bread_slice(int x)
{
	int	counter;

	ft_putchar(LEFT_CORNER_CHAR);
	if (x > 0)
	{
		counter = x - 2;
		while (counter > 0)
		{
			ft_putchar(HORIZONTAL_SIDE_CHAR);
			counter = counter - 1;
		}
	}
	if (x > 1)
		ft_putchar(RIGHT_CORNER_CHAR);
	ft_putchar('\n');
}

void	ft_filler(int x, int y)
{
	int	counter;

	y = y - 2;
	while (y > 0)
	{
		ft_putchar(VERTICAL_SIDE_CHAR);
		if (x > 1)
		{
			counter = x - 2;
			while (counter > 0)
			{
				ft_putchar(' ');
				counter = counter - 1;
			}
			ft_putchar(VERTICAL_SIDE_CHAR);
			ft_putchar('\n');
		}
		else
			ft_putchar('\n');
		y = y - 1;
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_bread_slice(x);
		if (y > 2)
			ft_filler(x, y);
		if (y > 1)
			ft_bread_slice(x);
	}
}
