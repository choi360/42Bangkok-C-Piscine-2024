/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 23:52:56 by npungkor          #+#    #+#             */
/*   Updated: 2024/01/22 15:37:44 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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

/*int	main(void)
{
	int	a1 = ft_str_is_printable("");
	int	a2 = ft_str_is_printable("AaBb");
	int	a3 = ft_str_is_printable("12345aAbB");
	int	a4 = ft_str_is_printable("\n");
	int	a5 = ft_str_is_printable("\t");
	int	a6 = ft_str_is_printable("\x7f");
	int	a7 = ft_str_is_printable("\x19");
	int	a8 = ft_str_is_printable("\xFF");
	
	printf ("Expect	result : 1 1 1 0 0 0 0 0\n");
	printf ("User	result : %d %d %d %d %d %d %d %d\n",
	a1, a2, a3, a4, a5, a6, a7, a8);

	return (0);
}*/
