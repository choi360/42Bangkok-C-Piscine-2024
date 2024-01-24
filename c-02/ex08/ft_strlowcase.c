/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: komethaw <komethaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:55:39 by komethaw          #+#    #+#             */
/*   Updated: 2024/01/23 18:45:40 by komethaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + ('a' - 'A');
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[20];

	sprintf(str, "%s", "SDFASD JYREW");
	printf("str = %s\n", str);
	sprintf(str, "%s", ft_strlowcase(str));
	printf("str = %s\n", str);
	return (0);
}
*/
