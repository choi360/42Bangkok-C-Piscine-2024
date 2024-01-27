/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: komethaw <komethaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 19:27:48 by komethaw          #+#    #+#             */
/*   Updated: 2024/01/26 16:27:57 by komethaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char *str1 = "Hello, World!";
    char *str2 = "Hello, World!";
    char *str3 = "Hello, C!";

    printf("Comparing '%s' and '%s' using    strcmp: %d\n",
    	str1, str2, strcmp(str1, str2));
    printf("Comparing '%s' and '%s' using ft_strcmp: %d\n",
    	str1, str2, ft_strcmp(str1, str2));

    printf("Comparing '%s' and '%s' using    strcmp: %d\n",
    	str1, str3, strcmp(str1, str3));
    printf("Comparing '%s' and '%s' using ft_strcmp: %d\n",
    	str1, str3, ft_strcmp(str1, str3));

    return 0;
}
*/
