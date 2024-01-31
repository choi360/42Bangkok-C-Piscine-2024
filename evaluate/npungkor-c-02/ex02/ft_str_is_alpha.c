/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:54:25 by npungkor          #+#    #+#             */
/*   Updated: 2024/01/22 15:26:31 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
	str[i] = '\0';
}

/*int     main(void)
{
        printf("EMPTY is should be 1: %d\n", ft_str_is_alpha(""));
        printf("abCdeZ is should be 1: %d\n", ft_str_is_alpha("abCdeZ"));
        printf("abc_ef is should be 0: %d\n", ft_str_is_alpha("abc_ef"));
        printf("abc|ef is should be 0: %d\n", ft_str_is_alpha("abc|ef"));
}*/
