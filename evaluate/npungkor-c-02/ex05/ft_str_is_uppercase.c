/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 22:58:01 by npungkor          #+#    #+#             */
/*   Updated: 2024/01/22 15:32:41 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	int a = ft_str_is_uppercase("");
	int b = ft_str_is_uppercase("A");
	int c =	ft_str_is_uppercase("ABCDE");
	int d = ft_str_is_uppercase("1234");
	int e = ft_str_is_uppercase("abxcd");
	int f = ft_str_is_uppercase("A098");
	int g = ft_str_is_uppercase(" ");

	printf("Expect	result : 1 1 1 0 0 0 0\n");
	printf("User	result : %d %d %d %d %d %d %d\n", a, b, c, d, e, f, g);

	return (0);
}*/
