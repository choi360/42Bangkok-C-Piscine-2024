/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 00:57:31 by npungkor          #+#    #+#             */
/*   Updated: 2024/01/22 15:39:40 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	return (str);
}

/*int	main(void)
{
	char a[] = "aBcdFrea1234";
	ft_strupcase(a);
	printf("Input\n");
	printf("aBcdFrea1234\n");
	printf("Output\n");
	printf("%s\n", a);
}*/
