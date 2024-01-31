/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plesukja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:29:38 by plesukja          #+#    #+#             */
/*   Updated: 2024/01/27 15:42:35 by plesukja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;

	i = 0;
	sign = 1;
	nb = 0;
	while ((str[i] != '\0') && (str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
		i++;
	while ((str[i] != '\0') && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while ((str[i] != '\0') && (str[i] >= '0' && str[i] <= '9'))
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	nb *= sign;
	return (nb);
}
/*
#include <stdio.h>
#include <stdlib.h>

int     ft_atoi(char *str);

int		main(void)
{
	char	*str, *str2;

	str = "      ----+---+++2300fesfss65+2";
	str2 = "2300";
	printf("%d\n", ft_atoi(str));
	//printf("%d\n", atoi(str2));
}
*/
