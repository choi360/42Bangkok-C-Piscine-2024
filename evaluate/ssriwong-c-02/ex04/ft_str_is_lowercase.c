/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssriwong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:18:48 by ssriwong          #+#    #+#             */
/*   Updated: 2024/01/27 17:32:33 by ssriwong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int	main(void)
{
	int	o1, o2, o3, o4, o5;

	o1 = ft_str_is_lowercase("ss");
	o2 = ft_str_is_lowercase("sS");
	o3 = ft_str_is_lowercase("s0");
	o4 = ft_str_is_lowercase("S0");
	o5 = ft_str_is_lowercase("00");
	printf("Expert	result : 1 0 0 0 0\n");
	printf("User	result : %d %d %d %d %d\n", o1, o2, o3, o4, o5);
	return (0);
}*/
