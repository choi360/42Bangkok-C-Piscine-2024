/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:31:17 by npungkor          #+#    #+#             */
/*   Updated: 2024/01/22 15:26:54 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
	str[i] = '\0';
}

/*int	main(void)
{
	printf("EMPTY is should be 1: %d\n", ft_str_is_numeric(""));
	printf("123456 is should be 1: %d\n", ft_str_is_numeric("123456"));
	printf("12_9 is should be 0: %d\n", ft_str_is_numeric("12_9"));
}*/
