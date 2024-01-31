/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssomsaku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 00:19:35 by ssomsaku          #+#    #+#             */
/*   Updated: 2024/01/22 01:53:30 by ssomsaku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, const char *src, unsigned int n)

{
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (dest);
}
/*
#include <stdio.h>

int main()
{
	char source[] = "Hello, World!";
	char destination[20];
	ft_strncpy(destination, source, 5);
	printf("%s\n", destination);
	return 0;
}*/
