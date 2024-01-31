/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:46:33 by akulikov          #+#    #+#             */
/*   Updated: 2024/01/15 12:58:23 by akulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
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

// int main(void)
// {	
// 	//Contains other characters, should give 0
// 	char string1[] = "Hello world";
// 	printf("%d\n", ft_str_is_alpha(string1));

// 	//Contains alphabet only, should be 1
// 	char string2[] = "Helloworld";
// 	printf("%d\n", ft_str_is_alpha(string2));

// 	//Contains empty string should be 1
//  char string3[] = "";
//  printf("%d\n", ft_str_is_alpha(string3));
// 	return 0;
// }