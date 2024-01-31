/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psetthak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:34:04 by psetthak          #+#    #+#             */
/*   Updated: 2024/01/30 18:29:33 by psetthak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int main(void)
{
	char src[] = "Hello";
	char dest[25] = "World1";

	printf("Src is \"%s\"\n", src);
	printf("Dest is \"%s\"\n", ft_strncpy(dest, src, 3));
	printf("DestO is \"%s\"\n", strncpy(dest, src, 3));
}*/
