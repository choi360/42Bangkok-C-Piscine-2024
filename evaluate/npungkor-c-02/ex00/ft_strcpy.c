/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 02:04:18 by npungkor          #+#    #+#             */
/*   Updated: 2024/01/22 02:07:23 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	a;

	a = 0;
	while (src[a])
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

/*int     main(void)
{
	char dst[10];

	char *ret = ft_strcpy(dst,"abcdef");
	printf("Expect result : abcdef\n");
	printf("User   result1: %s\n",dst);
    	printf("User   result2: %s\n",ret);

    	return (0);
}*/
