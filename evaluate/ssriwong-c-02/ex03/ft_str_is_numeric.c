/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numerric.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssriwong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:21:25 by ssriwong          #+#    #+#             */
/*   Updated: 2024/01/27 17:39:32 by ssriwong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
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
	int	s1 = ft_str_is_numeric("0453");
	int	s2 = ft_str_is_numeric("3453d");
	int	s3 = ft_str_is_numeric("fdghsd");

	printf("Expect	result : 1 0 0\n");
	printf("User	result : %d %d %d\n", s1, s2, s3);
	return (0);
}*/
