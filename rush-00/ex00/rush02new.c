/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaelim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 14:57:50 by ksaelim           #+#    #+#             */
/*   Updated: 2021/10/24 18:26:17 by lsomrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

#define A_CHAR	'A'
#define B_CHAR	'B'
#define C_CHAR	'C'

void	start(int length)
{
	int	mid;

	ft_putchar(A_CHAR);
	if (length > 2)
	{
		mid = length - 2;
		while (mid > 0)
		{	
			ft_putchar(B_CHAR);
			mid = mid - 1;
		}
	}
	if (length > 1)
		ft_putchar(A_CHAR);
	ft_putchar('\n');
}

void	end(int length)
{
	int	mid;

	ft_putchar(C_CHAR);
	if (length > 2)
	{
		mid = length - 2;
		while (mid > 0)
		{
			ft_putchar(B_CHAR);
			mid = mid - 1;
		}
		ft_putchar(C_CHAR);
		ft_putchar('\n');
	}
}

void	between(int length, int heigth)
{
	int	mid;

	heigth = heigth - 2;
	while (heigth > 0)
	{
		ft_putchar(B_CHAR);
		if (length > 2)
		{
			mid = length - 2;
			while (mid > 0)
			{
				ft_putchar(' ');
				mid = mid - 1;
			}
			ft_putchar(B_CHAR);
			ft_putchar('\n');
		}
		else
			ft_putchar('\n');
		heigth = heigth - 1;
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		start(x);
		if (y > 2)
			between(x, y);
		if (y > 1)
			end(x);
	}
}
