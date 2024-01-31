/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleelaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 21:46:21 by aleelaha          #+#    #+#             */
/*   Updated: 2024/01/25 01:07:00 by aleelaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	o;

	i = 0;
	o = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[o] != '\0' && o < nb)
	{
		dest[i] = src[o];
		i++;
		o++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	a[] = "Hello";
	char	b[] = "World";

	printf("%s\n", ft_strncat(a, b, 3));
}*/
