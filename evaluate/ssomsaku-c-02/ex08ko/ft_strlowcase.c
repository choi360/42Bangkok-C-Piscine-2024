/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssomsaku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 00:30:41 by ssomsaku          #+#    #+#             */
/*   Updated: 2024/01/23 00:33:44 by ssomsaku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char	*str)

{
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 32;
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

	ft_strlowcase(test1);
	ft_strlowcase(test2);
	ft_strlowcase(test3);

	printf("%s\n %s\n %s\n", test1, test2, test3);
}*/
