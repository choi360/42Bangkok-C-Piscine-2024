/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: komethaw <komethaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:04:44 by komethaw          #+#    #+#             */
/*   Updated: 2024/01/23 17:44:52 by komethaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char dst[10];
	char *ret = ft_strcpy(dst,"abcdef");
	printf("Expect result : abcdef\n");
    	printf("User   result1: %s\n",dst);
    	printf("User   result2: %s\n",ret);	
    	return (0);
}
