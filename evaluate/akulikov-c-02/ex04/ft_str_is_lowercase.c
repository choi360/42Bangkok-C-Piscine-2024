/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:54:43 by akulikov          #+#    #+#             */
/*   Updated: 2024/01/15 13:03:01 by akulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
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
// 	printf("%d\n", ft_str_is_lowercase(string1));

// 	//Contains lowercase only, should be 1
// 	char string2[] = "hello";
// 	printf("%d\n", ft_str_is_lowercase(string2));

// 	//Contains empty string should be 1
// 	char string3[] = "";
// 	printf("%d\n", ft_str_is_lowercase(string3));
// 	return 0;
// }