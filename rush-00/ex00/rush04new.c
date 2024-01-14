/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04new.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaelim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 23:21:13 by ksaelim           #+#    #+#             */
/*   Updated: 2021/10/24 23:23:47 by ksaelim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define CORNER1_CHAR 'A'
#define CORNER2_CHAR 'C'
#define MID_CHAR 'B'
#define HEIGHT_CHAR ' '

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	c;
	int	r;

	r = 1;
	while (r <= y && x > 0)
	{
		c = 1;
		while (c <= x)
		{
			if ((c == 1 && r == 1) || (c == x && r == y))
				ft_putchar(CORNER1_CHAR);
			else if ((c == x && r == 1) || (c == 1 && r == y))
				ft_putchar(CORNER2_CHAR);
			else if ((c == 1) || (c == x) || (r == 1) || (r == y))
				ft_putchar(MID_CHAR);
			else
				ft_putchar(HEIGHT_CHAR);
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}
