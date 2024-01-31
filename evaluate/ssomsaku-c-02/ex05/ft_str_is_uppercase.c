/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssomsaku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 23:39:02 by ssomsaku          #+#    #+#             */
/*   Updated: 2024/01/22 23:42:01 by ssomsaku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char	*str)
{
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
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
	int ret1 = ft_str_is_uppercase("");
	int ret2 = ft_str_is_uppercase("A");
	int ret3 = ft_str_is_uppercase("ABABZ");
	int ret4 = ft_str_is_uppercase("abcdf");
	int ret5 = ft_str_is_uppercase("0A");
	int ret6 = ft_str_is_uppercase("123");
	int ret7 = ft_str_is_uppercase("A0");
	int ret8 = ft_str_is_uppercase(" ");

	printf("Expect result : 1 1 1 0 0 0 0 0\n");
    printf("User   result : %d %d %d %d %d %d %d %d\n",ret1
,ret2,ret3,ret4,ret5,ret6,ret7,ret8);

    return (0);
}*/
