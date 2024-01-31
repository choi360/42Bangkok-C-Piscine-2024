/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:03:53 by akulikov          #+#    #+#             */
/*   Updated: 2024/01/15 14:06:11 by akulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			str++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

// int main()
// {
// 	//Contains lowercase along with uppercase, should give 0
// 	char string1[] = "Hello";
// 	printf("%d\n", ft_str_is_uppercase(string1));

// 	//Contains uppercase only, should be 1
// 	char string2[] = "HELLO";
// 	printf("%d\n", ft_str_is_uppercase(string2));

// 	//Contains empty string should be 1
// 	char string3[] = "";
// 	printf("%d\n", ft_str_is_uppercase(string3));
// 	return 0;
// }