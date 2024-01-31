/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssomsaku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 01:29:55 by ssomsaku          #+#    #+#             */
/*   Updated: 2024/01/21 18:11:43 by ssomsaku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)

{
	int	swap;

	if (b != 0)
	{
		swap = *a % *b;
		*a = *a / *b;
		*b = swap;
	}
}
/*
#include <stdio.h>

int main(void)

{
	int a = 78;
	int b = 11;

	ft_ultimate_div_mod(&a, &b);
	printf("a div b => a = %d\na mod b => b = %d", a, b);
	return (0);
}*/
