/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssriwong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:45:32 by ssriwong          #+#    #+#             */
/*   Updated: 2024/01/27 19:04:55 by ssriwong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
	int u1 = ft_str_is_uppercase("OPSJSKND");
	int u2 = ft_str_is_uppercase("dioIoodps");
	int u3 = ft_str_is_uppercase("UNVF2");
	int u4 = ft_str_is_uppercase("234");
	int u5 = ft_str_is_uppercase(" ");

	printf("Expert	result : 1 0 0 0 0\n");
	printf("User	result : %d %d %d %d %d\n", u1, u2, u3, u4, u5);

	return (0);
}*/
