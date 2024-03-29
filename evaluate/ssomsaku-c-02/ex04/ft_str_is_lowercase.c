/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssomsaku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 23:34:30 by ssomsaku          #+#    #+#             */
/*   Updated: 2024/01/22 23:38:17 by ssomsaku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char	*str)

{
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			str++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
#include <stdio.h>

int     main(void)
{
	int ret1 = ft_str_is_lowercase("");
	int ret2 = ft_str_is_lowercase("Ac");
	int ret3 = ft_str_is_lowercase("abcABc");
	int ret4 = ft_str_is_lowercase("abcdf");
	int ret5 = ft_str_is_lowercase("0");
	int ret6 = ft_str_is_lowercase("a0A");
	int ret7 = ft_str_is_lowercase("123");
	int ret8 = ft_str_is_lowercase(" ");

	printf("Expect result : 1 1 0 0 0 0 0 0\n");
    printf("User   result : %d %d %d %d %d %d %d %d\n"
,ret1,ret4,ret7,ret5,ret2,ret6,ret3,ret8);

    	return (0);
}*/
