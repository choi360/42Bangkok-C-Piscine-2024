/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 01:51:34 by npungkor          #+#    #+#             */
/*   Updated: 2024/01/22 17:27:54 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	return (str);
}

/*int	main(void)
{
	char a[] = "ABcDefG1234";
	ft_strlowcase(a);
	printf("Input\n");
	printf("ABcDefG1234\n");
	printf("Output\n");
	printf("%s\n", a);
}*/
