/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psetthak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 23:33:47 by psetthak          #+#    #+#             */
/*   Updated: 2024/01/29 00:21:00 by psetthak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	printf("%d\n", ft_str_is_uppercase("JDKFURIOH"));
	printf("%d\n", ft_str_is_uppercase("KFJkfdjf"));
	printf("%d\n", ft_str_is_uppercase("JDJDS123"));
	printf("%d\n", ft_str_is_uppercase(""));
}*/
