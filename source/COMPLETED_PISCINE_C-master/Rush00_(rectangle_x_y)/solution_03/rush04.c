/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clseyer <clseyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/06 18:47:30 by clseyer           #+#    #+#             */
/*   Updated: 2014/07/06 18:47:35 by clseyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		jp_putchar(char c);
void	jp_hd_ft(char d, char m, char f, int l);

void	colle(int x, int y)
{
	int i;

	i = 0;
	if (x > 0 && y > 0)
	{
		jp_hd_ft('A', 'B', 'C', x);
		if (y > 2)
		{
			while (i < (y - 2))
			{
				jp_hd_ft('B', ' ', 'B', x);
				i++;
			}
		}
		if (y > 1)
		{
			jp_hd_ft('C', 'B', 'A', x);
		}
	}
}

void	jp_hd_ft(char d, char m, char f, int l)
{
	int i;

	i = 0;
	jp_putchar(d);
	while (i < (l - 2))
	{
		jp_putchar(m);
		i++;
	}
	if (l > 1)
	{
		jp_putchar(f);
	}
	jp_putchar('\n');
}
