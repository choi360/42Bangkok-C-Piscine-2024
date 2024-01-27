/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: komethaw <komethaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 19:40:24 by komethaw          #+#    #+#             */
/*   Updated: 2024/01/26 16:28:14 by komethaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (i < n - 1) && s1[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    // Example 1: Strings are the same
    char *str1_1 = "Hello World";
    char *str2_1 = "Hello World";
    unsigned int n1 = 5;

    // Example 2: Strings are the same for the first n characters
    char *str1_2 = "Hello World";
    char *str2_2 = "Hello There";
    unsigned int n2 = 5;

    // Example 3: Completely different strings, checking first n characters
    char *str1_3 = "Hello";
    char *str2_3 = "World";
    unsigned int n3 = 3;

    // Testing Example 1
    printf("Example 1:\n");
    printf("ft_strncmp: %d\n", ft_strncmp(str1_1, str2_1, n1));
    printf("   strncmp: %d\n\n", strncmp(str1_1, str2_1, n1));

    // Testing Example 2
    printf("Example 2:\n");
    printf("ft_strncmp: %d\n", ft_strncmp(str1_2, str2_2, n2));
    printf("   strncmp: %d\n\n", strncmp(str1_2, str2_2, n2));

    // Testing Example 3
    printf("Example 3:\n");
    printf("ft_strncmp: %d\n", ft_strncmp(str1_3, str2_3, n3));
    printf("   strncmp: %d\n", strncmp(str1_3, str2_3, n3));

    return 0;
}
*/
