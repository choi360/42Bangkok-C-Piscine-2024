/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 22:48:38 by npungkor          #+#    #+#             */
/*   Updated: 2024/01/22 15:30:58 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
        int ret1 = ft_str_is_lowercase("");
        int ret2 = ft_str_is_lowercase("Ac");
        int ret3 = ft_str_is_lowercase("abcABc");
        int ret4 = ft_str_is_lowercase("abcdf");
        int ret5 = ft_str_is_lowercase("0");
        int ret6 = ft_str_is_lowercase("a0A");
        int ret7 = ft_str_is_lowercase("123");
        int ret8 = ft_str_is_lowercase(" ");

        printf("Expect result : 1 1 0 0 0 0 0 0\n");
        printf("User   result : %d %d %d %d %d %d %d %d\n",ret1,
	ret4,ret7,ret5,ret2,ret6,ret3,ret8);

        return (0);
}*/
