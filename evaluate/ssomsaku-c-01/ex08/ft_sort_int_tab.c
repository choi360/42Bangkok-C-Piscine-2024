/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssomsaku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 21:38:08 by ssomsaku          #+#    #+#             */
/*   Updated: 2024/01/20 01:28:42 by ssomsaku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)

{
	int	s;
	int	t;
	int	tmp;

	t = 0;
	while (t < size)
	{
		s = 0;
		while (s < size)
		{
			if (tab[s] > tab[t])
			{
				tmp = tab[s];
				tab[s] = tab[t];
				tab[t] = tmp;
			}
			s++;
		}
		t++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int k;
	int size;
	int n[ ] = {3,9,7,0,2};

	size = 5;
	ft_sort_int_tab(n, size);

	k = 0;
	while (k < size)
	{
		printf("%d ",n[k]);
		k++;
	}
	return (0);
}*/
