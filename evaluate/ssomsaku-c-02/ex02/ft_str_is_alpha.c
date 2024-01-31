/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssomsaku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 01:58:53 by ssomsaku          #+#    #+#             */
/*   Updated: 2024/01/22 23:22:55 by ssomsaku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char	*str)

{
	while (*str != '\0')
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
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
	int ret1 = ft_str_is_alpha("");
	int ret2 = ft_str_is_alpha("A");
	int ret3 = ft_str_is_alpha("abcABc");
	int ret4 = ft_str_is_alpha("abcdf");
	int ret5 = ft_str_is_alpha("0");
	int ret6 = ft_str_is_alpha("a0A");
	int ret7 = ft_str_is_alpha("123");
	int ret8 = ft_str_is_alpha(" ");

	printf("Expect result : 1 1 1 1 0 0 0 0\n");
   	printf("User   result : %d %d %d %d %d %d %d %d\n",ret
1,ret2,ret3,ret4,ret5,ret6,ret7,ret8);	
    	return (0);
}*/
