/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssomsaku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 22:20:46 by ssomsaku          #+#    #+#             */
/*   Updated: 2024/01/19 23:33:47 by ssomsaku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)

{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
#include <stdio.h>
int main(void)

{
	int a = 78;
	int b = 11;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);
	printf("a div b = %d\na mod b = %d", div, mod);
	return (0);
}*/
