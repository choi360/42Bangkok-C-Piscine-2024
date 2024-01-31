/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichompo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:47:01 by jichompo          #+#    #+#             */
/*   Updated: 2024/01/17 17:39:29 by jichompo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_num(int f_num, int s_num)
{
	char	f_d;
	char	s_d;
	char	t_d;
	char	fr_d;

	f_d = (f_num / 10) + 48;
	s_d = (f_num % 10) + 48;
	t_d = (s_num / 10) + 48;
	fr_d = (s_num % 10) + 48;
	write (1, &f_d, 1);
	write (1, &s_d, 1);
	write (1, " ", 1);
	write (1, &t_d, 1);
	write (1, &fr_d, 1);
	if (f_num == 98 && s_num == 99)
		return ;
	else
		write (1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	f_num;
	int	s_num;

	f_num = 0;
	while (f_num <= 98)
	{
		s_num = 0;
		while (s_num <= 99)
		{
			if (s_num > f_num)
			{
				ft_print_num(f_num, s_num);
			}
			s_num++;
		}
		f_num++;
	}
}
