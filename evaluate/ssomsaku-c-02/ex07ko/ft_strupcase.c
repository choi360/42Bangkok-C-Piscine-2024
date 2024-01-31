/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssomsaku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 23:56:43 by ssomsaku          #+#    #+#             */
/*   Updated: 2024/01/23 00:29:55 by ssomsaku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char	*str)

{
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <string.h>

int     main(void)
{
	char test1[] = "Hallo ";
	char test2[] = "123AbC";
	char test3[] = "sU Su";

	ft_strupcase(test1);
	ft_strupcase(test2);
	ft_strupcase(test3);

	printf("%s\n %s\n %s\n", test1, test2, test3);
}*/
