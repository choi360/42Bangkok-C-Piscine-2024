/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:07:15 by akulikov          #+#    #+#             */
/*   Updated: 2024/01/15 14:15:19 by akulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str >= ' ')
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
// 	//Contains non-printable characters, should give 0
// 	char string1[] = "Hello \x01 world";
// 	printf("%d\n", ft_str_is_printable(string1));

// 	//Contains uppercase only, should be 1
// 	char string2[] = "Hello world";
// 	printf("%d\n", ft_str_is_printable(string2));

// 	//Contains empty string should be 1
// 	char string3[] = "";
// 	printf("%d\n", ft_str_is_printable(string3));
// 	return 0;
// }