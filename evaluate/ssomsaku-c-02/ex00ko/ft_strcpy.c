/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssomsaku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 23:36:06 by ssomsaku          #+#    #+#             */
/*   Updated: 2024/01/22 01:27:10 by ssomsaku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
/*
{
	char *original_dest = dest;
	{
		while ((*dest++ == *src++) != '\0')
		{
		}
		return (original_dest);
	}
}
*/
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main()
{
	char source[20] = "Hello, World!";
	char destination[20];
    ft_strcpy(destination, source);
    printf("%s\n", destination);
    return 0;
}*/
