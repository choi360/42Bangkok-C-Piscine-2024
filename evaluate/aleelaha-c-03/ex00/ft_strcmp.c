/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleelaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:51:11 by aleelaha          #+#    #+#             */
/*   Updated: 2024/01/23 18:06:45 by aleelaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char a[] = "IAMKING";
	char b[] = "IAMKING";
	char c[] = "iamking";

	printf("%d\n", ft_strcmp(a, b));
	printf("%d\n", ft_strcmp(a, c));
}*/
