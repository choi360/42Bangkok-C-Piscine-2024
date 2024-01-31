/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssriwong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 18:32:50 by ssriwong          #+#    #+#             */
/*   Updated: 2024/01/27 19:02:22 by ssriwong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
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
	int p1 = ft_str_is_printable("dsjfk290%$");
	int p2 = ft_str_is_printable("\x7f");
	int p3 = ft_str_is_printable("\x1"); 
	int p4 = ft_str_is_printable("\x13");
	int p5 = ft_str_is_printable("\x1a");

	printf("Expert	result : 1 0 0 0 0 \n");
	printf("User	resual : %d %d %d %d %d\n", p1, p2, p3, p4, p5);

	return (0);
}*/
