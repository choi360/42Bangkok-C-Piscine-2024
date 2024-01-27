/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: komethaw <komethaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 15:07:50 by komethaw          #+#    #+#             */
/*   Updated: 2024/01/27 15:21:37 by komethaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	result = 0;
	int	sign = 1;

	// Check for whitespaces
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	// Check for sign
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	// Convert number
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
