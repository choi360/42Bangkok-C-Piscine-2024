/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmethawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 21:45:48 by kmethawa          #+#    #+#             */
/*   Updated: 2021/11/04 21:53:20 by kmethawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char			dest[50];
	char			*src;
	unsigned int	size;

	sprintf(dest, "%s", "bonjour");
	src = " les amis";
	size = 5;
	printf(".%s.\n", ft_strncat(dest, src, size));
	printf(".%s.\n", strncat(dest, src, size));
	return (0);
}
