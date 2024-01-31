/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleelaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:34:22 by aleelaha          #+#    #+#             */
/*   Updated: 2024/01/25 02:28:36 by aleelaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>
#include <string.h>*/

char	*ft_strstr(char *str, char *to_find)
{
	char	*i;
	char	*o;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str)
	{
		i = str;
		o = to_find;
		while (*i && *o && *i == *o)
		{
			i++;
			o++;
		}
		if (*o == '\0')
			return (str);
		str++;
	}
	return (0);
}
/*
int	main(void)
{
	char test1[] = "Yes Mod Ads";
	char test2[] = "Mod";

	printf("Expected : %s\n", strstr(test1, test2));

	if (ft_strstr(test1, test2) != 0)
	{
		printf("%s\n", ft_strstr(test1, test2));
	}
	else
	{
		printf("Not Found\n");
	}
	return (0);
}*/
