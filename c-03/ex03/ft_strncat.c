/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: komethaw <komethaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 21:03:42 by komethaw          #+#    #+#             */
/*   Updated: 2024/01/26 15:47:10 by komethaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
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

int main(void)
{
    char dest1[50] = "Hello, ";
    char dest2[50] = "Hello, ";
    char dest3[50] = "Hello, ";

    char src1[] = "world!";
    char src2[] = "world!";
    char src3[] = "world!";
    
    unsigned int nb = 3;

    // Using the custom ft_strncat function
    ft_strncat(dest1, src1, nb);
    printf("Using ft_strncat: %s\n", dest1);

    // Using the standard strncat function
    strncat(dest2, src2, nb);
    printf("Using    strncat: %s\n", dest2);

    // Testing with a larger 'nb' value to concatenate more characters
    nb = 10;
    ft_strncat(dest3, src3, nb);
    printf("Using ft_strncat with a larger 'nb': %s\n", dest3);

    return (0);
}
*/
