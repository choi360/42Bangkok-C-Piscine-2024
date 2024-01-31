/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssomsaku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:56:55 by ssomsaku          #+#    #+#             */
/*   Updated: 2024/01/19 23:46:59 by ssomsaku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int     main(void)
{
	int len = ft_strlen("0123456789");
	
    	printf("Expect result : 10\n");
    	printf("User   result : %d\n",len);
    	return (0);
}*/
