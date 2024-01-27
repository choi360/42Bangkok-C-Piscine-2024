/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: komethaw <komethaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:34:24 by komethaw          #+#    #+#             */
/*   Updated: 2024/01/26 15:46:06 by komethaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    // Example 1
    char dest1[50] = "Hello";
    char src1[] = " World";
    char dest1_copy[50];
    strcpy(dest1_copy, dest1); // Copy dest1 to dest1_copy for fair comparison

    // Using ft_strcat
    printf("Before ft_strcat: %s\n", dest1);
    ft_strcat(dest1, src1);
    printf("After  ft_strcat: %s\n", dest1);

    // Using strcat
    printf("Before    strcat: %s\n", dest1_copy);
    strcat(dest1_copy, src1);
    printf("After     strcat: %s\n\n", dest1_copy);

    // Example 2
    char dest2[50] = "OpenAI";
    char src2[] = " GPT-4";
    char dest2_copy[50];
    strcpy(dest2_copy, dest2);

    // Using ft_strcat
    printf("Before ft_strcat: %s\n", dest2);
    ft_strcat(dest2, src2);
    printf("After  ft_strcat: %s\n", dest2);

    // Using strcat
    printf("Before    strcat: %s\n", dest2_copy);
    strcat(dest2_copy, src2);
    printf("After     strcat: %s\n\n", dest2_copy);

    // Example 3
    char dest3[50] = "2024";
    char src3[] = " is amazing!";
    char dest3_copy[50];
    strcpy(dest3_copy, dest3);

    // Using ft_strcat
    printf("Before ft_strcat: %s\n", dest3);
    ft_strcat(dest3, src3);
    printf("After  ft_strcat: %s\n", dest3);

    // Using strcat
    printf("Before    strcat: %s\n", dest3_copy);
    strcat(dest3_copy, src3);
    printf("After     strcat: %s\n", dest3_copy);

    return 0;
}
*/
