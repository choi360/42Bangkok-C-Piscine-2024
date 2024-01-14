/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaelim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 23:38:23 by ksaelim           #+#    #+#             */
/*   Updated: 2021/10/24 23:39:45 by ksaelim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define CORNER_CHAR 'o'
#define MIDX_CHAR '-'
#define MIDY_CHAR '|'
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
				ft_putchar(CORNER_CHAR);
			else if ((c == x && r == 1) || (c == 1 && r == y))
				ft_putchar(CORNER_CHAR);
			else if ((c == 1) || (c == x))
				ft_putchar(MIDY_CHAR);
			else if ((r == 1) || (r == y))
				ft_putchar(MIDX_CHAR);
			else
				ft_putchar(HEIGHT_CHAR);
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}
