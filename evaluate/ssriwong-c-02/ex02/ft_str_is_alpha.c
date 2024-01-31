/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssriwong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 15:08:37 by ssriwong          #+#    #+#             */
/*   Updated: 2024/01/27 16:03:54 by ssriwong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int     main(void)
{
	int r1 = ft_str_is_alpha("");
	int r2 = ft_str_is_alpha("A");
	int r3 = ft_str_is_alpha("abcABc");
	int r4 = ft_str_is_alpha("abcdf");
	int r5 = ft_str_is_alpha("0");
	int r6 = ft_str_is_alpha("a0A");
	int r7 = ft_str_is_alpha("123");
	int r8 = ft_str_is_alpha(" ");

	printf("Expect result : 1 1 1 1 0 0 0 0\n");
	printf("User   result : %d %d %d %d %d %d %d %d\n",r1,r2,r3,r4,r5,r6,r7,r8);

    	return (0);
}*/
