/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssomsaku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 21:45:52 by ssomsaku          #+#    #+#             */
/*   Updated: 2024/01/19 23:36:50 by ssomsaku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int	*a, int	*b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}
/*
#include <stdio.h>

int	main(void)
{
	int a = 1;
	int b = 2;
	ft_swap(&a, &b);
	printf("a = %d b = %d", a, b);
	return (0);
}*/
