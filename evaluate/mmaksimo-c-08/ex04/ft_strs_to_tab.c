/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaksimo <mmaksimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:51:03 by mmaksimo          #+#    #+#             */
/*   Updated: 2024/01/30 20:23:42 by mmaksimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

void	destroy_stocked(t_stock_str *stocked)
{
	int	i;

	i = 0;
	if (stocked == NULL)
		return ;
	while (stocked[i].str != 0)
	{
		free(stocked[i].copy);
		i++;
	}
	free(stocked);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

int	ft_strlen(char *str)
{
	char	*str0;

	str0 = str;
	while (*str)
		str++;
	return (str - str0);
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock_av;
	int			i;

	stock_av = malloc(sizeof(t_stock_str) * (ac + 1));
	if (stock_av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		stock_av[i].size = ft_strlen(av[i]);
		stock_av[i].str = av[i];
		stock_av[i].copy = malloc(sizeof(char) * ft_strlen(av[i]) + 1);
		if (stock_av[i].copy == NULL)
			return (NULL);
		ft_strcpy(stock_av[i].copy, av[i]);
		i++;
	}
	stock_av[i].str = 0;
	return (stock_av);
}
// #include <stdio.h>

// int	main(int argc, char *argv[])
// {
// 	if (argc < 2)
// 		return (-1);

// 	t_stock_str *stored;
// 	stored = ft_strs_to_tab(argc - 1, argv + 1);

// 	int i = 0;
// 	while (stored[i].size != 0)
// 	{
// 		printf("Stored String %d\n", i + 1);
// 		printf("int: %d\n", stored[i].size);
// 		printf("str: %s\n", stored[i].str);
// 		printf("copy: %s \n", stored[i].copy);
// 		printf("\n");
// 		i++;
// 	}
// 	destroy_stocked(stored);
// 	return (0);
// }
