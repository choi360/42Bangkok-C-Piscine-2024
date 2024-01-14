/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmethawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 12:33:47 by kmethawa          #+#    #+#             */
/*   Updated: 2021/10/24 13:37:02 by kmethawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c);

#define LEFT_CORNER 'o'
#define RIGHT_CORNER 'o'
#define HORIZONTAL '-'
#define VERTICAL '|'

/*
int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
*/

void	ft_top_and_bottom(int x)
{
	int	count;

	ft_putchar(LEFT_CORNER);
	if (x > 2)
	{
		count = x - 2;
		while (count > 0)
		{
			ft_putchar(HORIZONTAL);
			count--;
		}
	}
	if (x > 1)
		ft_putchar(RIGHT_CORNER);
	ft_putchar('\n');
}

void	ft_middle(int x, int y)
{
	int	count;

	y = y - 2;
	while (y > 0)
	{
		ft_putchar(VERTICAL);
		if (x > 1)
		{
			count = x - 2;
			while (count > 0)
			{
				ft_putchar(' ');
				count--;
			}
			ft_putchar(VERTICAL);
			ft_putchar('\n');
		}
		else
			ft_putchar('\n');
		y--;
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_top_and_bottom(x);
		if (y > 2)
			ft_middle(x, y);
		if (y > 1)
			ft_top_and_bottom(x);
	}
}

/*
int	main()
{
	rush(1, 2);
	return (0);
}
*/
