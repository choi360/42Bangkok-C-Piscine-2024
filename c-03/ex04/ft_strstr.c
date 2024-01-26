/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: komethaw <komethaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 14:12:19 by komethaw          #+#    #+#             */
/*   Updated: 2024/01/26 14:34:27 by komethaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	tmp;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			tmp = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					tmp = 1;
				i++;
			}
			if (tmp == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    
    // Case 1: Substring exists in the main string
    char to_find1[] = "World";
    printf("strstr:    %s\n", strstr(str, to_find1)); // Standard strstr function
    printf("ft_strstr: %s\n", ft_strstr(str, to_find1)); // Your ft_strstr function

    // Case 2: Substring does not exist in the main string
    char to_find2[] = "Universe";
    printf("strstr:    %s\n", strstr(str, to_find2)); // Standard strstr function
    printf("ft_strstr: %s\n", ft_strstr(str, to_find2)); // Your ft_strstr function

    // Case 3: Substring is an empty string
    char to_find3[] = "";
    printf("strstr:    %s\n", strstr(str, to_find3)); // Standard strstr function
    printf("ft_strstr: %s\n", ft_strstr(str, to_find3)); // Your ft_strstr function

    return 0;
}
*/
