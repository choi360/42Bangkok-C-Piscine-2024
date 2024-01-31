/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psetthak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 23:25:21 by psetthak          #+#    #+#             */
/*   Updated: 2024/01/29 00:21:30 by psetthak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

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
}

/*int main(void)
{
	printf("%d\n", ft_str_is_lowercase("kawaii"));
	printf("%d\n", ft_str_is_lowercase("KittyCat"));
	printf("%d\n", ft_str_is_lowercase("12345jkdh599"));
	printf("%d\n", ft_str_is_lowercase(""));
}*/
