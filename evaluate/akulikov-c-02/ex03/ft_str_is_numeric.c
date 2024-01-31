/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:48:55 by akulikov          #+#    #+#             */
/*   Updated: 2024/01/15 12:59:54 by akulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
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
// 	//Contains other characters, should give 0
// 	char string1[] = "123 world";
// 	printf("%d\n", ft_str_is_numeric(string1));

// 	//Contains digits only, should be 1
// 	char string2[] = "12345";
// 	printf("%d\n", ft_str_is_numeric(string2));

// 	//Contains empty string should be 1
// 	char string3[] = "";
// 	printf("%d\n", ft_str_is_numeric(string3));
// 	return 0;
// }