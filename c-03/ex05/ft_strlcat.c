/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: komethaw <komethaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 14:54:49 by komethaw          #+#    #+#             */
/*   Updated: 2024/01/26 15:09:02 by komethaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_str_length_fast(char *dest)
{
	unsigned int	count;

	count = 0;
	while (dest[count] != '\0')
		count++;
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*dst;
	char			*src_start;
	unsigned int	dst_length;
	unsigned int	remaing;

	dst = dest;
	src_start = src;
	remaing = size;
	while (remaing-- != 0 && *dst != '\0')
		dst++;
	dst_length = dst - dest;
	remaing = size - dst_length;
	if (remaing == 0)
		return (dst_length + ft_str_length_fast(src));
	while (*src != '\0')
	{
		if (remaing > 1)
		{
			*dst++ = *src;
			remaing--;
		}
		src++;
	}
	*dst = '\0';
	return (dst_length + (src - src_start));
}
/*
#include <stdio.h>
#include <string.h>

// Insert your ft_strlcat function here.
// Insert your ft_str_length_fast function here.

int main() {
    char dest1[20] = "Hello";
    char src1[] = ", World!";
    unsigned int size1 = 20;

    // Example 1: Sufficient space in dest
    printf("Original dest: %s\n", dest1);
    printf("Return strlcat: %lu\n", strlcat(dest1, src1, size1));
    printf("After strlcat: %s\n", dest1);

    char ft_dest1[20] = "Hello";
    printf("Return ft_strlcat: %u\n", ft_strlcat(ft_dest1, src1, size1));
    printf("After ft_strlcat: %s\n\n", ft_dest1);

    // Example 2: Insufficient space in dest
    char dest2[10] = "Hello";
    char src2[] = ", World!";
    unsigned int size2 = 10;

    printf("Original dest: %s\n", dest2);
    printf("Return strlcat: %lu\n", strlcat(dest2, src2, size2));
    printf("After strlcat: %s\n", dest2);

    char ft_dest2[10] = "Hello";
    printf("Return ft_strlcat: %u\n", ft_strlcat(ft_dest2, src2, size2));
    printf("After ft_strlcat: %s\n\n", ft_dest2);

    // Example 3: Exact space in dest
    char dest3[12] = "Hello";
    char src3[] = ", World";
    unsigned int size3 = 12;

    printf("Original dest: %s\n", dest3);
    printf("Return strlcat: %lu\n", strlcat(dest3, src3, size3));
    printf("After strlcat: %s\n", dest3);

    char ft_dest3[12] = "Hello";
    printf("Return ft_strlcat: %u\n", ft_strlcat(ft_dest3, src3, size3));
    printf("After ft_strlcat: %s\n\n", ft_dest3);

    return 0;
}
*/
