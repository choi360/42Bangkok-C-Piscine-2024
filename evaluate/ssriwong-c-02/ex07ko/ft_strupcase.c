/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssriwong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 19:06:39 by ssriwong          #+#    #+#             */
/*   Updated: 2024/01/28 13:03:28 by ssriwong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' || str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (0);
}
/*int	main(void)
{
	int u1 = *ft_strupcase("kOponI95jv9");

	printf("Expert	result : kOponI95jv9\n");
	printf("User	result : %d\n", u1);
	return (0);
}*/
