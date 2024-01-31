/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssomsaku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:35:09 by ssomsaku          #+#    #+#             */
/*   Updated: 2024/01/19 23:51:58 by ssomsaku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)

{
	int	swapper;

	swapper = *a;
	*a = *b;
	*b = swapper;
}

void	ft_rev_int_tab(int *tab, int size)

{
	int	i;

	i = 0;
	{
		while (i < size)
		{
			ft_swap(&tab[i], &tab[size -1]);
			i++;
			size--;
		}
	}
}
/*
#include <stdio.h>
int     main(void)

{
	int a[] = { 0, 100, 200, 300, 400, 500, 600};
	
	ft_rev_int_tab(a, 10);

    	printf("Expect result : 600, 500, 400, 300, 200, 100, 0, \n");
    	printf("User   result : ");
	
	for (int i =0; i<= 9;i++)
	{
		printf("%d, ",a[i]);
	}
	printf("\n");

    	return (0);
}*/
