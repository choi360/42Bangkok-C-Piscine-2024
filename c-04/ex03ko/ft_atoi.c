/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: komethaw <komethaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 15:07:50 by komethaw          #+#    #+#             */
/*   Updated: 2024/01/27 17:01:53 by komethaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int	main(void)
{
	char	*str;
	char	*str2;

	str = "      ----+---+++2300fesfss65+2";
	str2 = "2300";
	printf("%d\n", ft_atoi(str));
}*/
