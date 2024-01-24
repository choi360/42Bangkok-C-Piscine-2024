/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: komethaw <komethaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:54:04 by komethaw          #+#    #+#             */
/*   Updated: 2024/01/23 18:43:37 by komethaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - ('a' - 'A');
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[20];

	sprintf(str, "%s", "sdf asdfasl lll");
	printf("str = %s\n", str);
	sprintf(str, "%s", ft_strupcase(str));
	printf("str = %s\n", str);
	return (0);
}
*/
