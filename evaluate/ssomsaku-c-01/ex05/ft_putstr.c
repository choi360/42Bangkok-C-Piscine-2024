/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssomsaku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 02:12:29 by ssomsaku          #+#    #+#             */
/*   Updated: 2024/01/19 23:44:23 by ssomsaku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	write(1, str, i);
}
/*
#include <stdio.h>

int     main(void)

{
    	printf("Expect result : abcdef\n");
    	printf("User   result : ");
	fflush(stdout);
	ft_putstr("abcdef");
	
	printf("\n");
    	return (0);
}*/
