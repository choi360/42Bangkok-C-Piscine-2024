/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: komethaw <komethaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:56:33 by komethaw          #+#    #+#             */
/*   Updated: 2024/01/27 17:00:02 by komethaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;

	i = ft_strlen("Hello World.");
	printf("i = %d\n", i);
	return (0);
}*/
