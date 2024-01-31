/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaksimo <mmaksimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:17:36 by mmaksimo          #+#    #+#             */
/*   Updated: 2024/01/30 20:36:25 by mmaksimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	get_num_length(int n)
{
	int	length;

	length = 0;
	if (n <= 0)
		length = 1;
	while (n != 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				length;
	unsigned int	num;
	int				is_negative;

	length = get_num_length(n);
	str = (char *) malloc(sizeof(char) * (length + 1));
	if (!str)
		return (NULL);
	is_negative = n < 0;
	num = n;
	if (is_negative)
		num = -n;
	while (length > 0)
	{
		length--;
		str[length] = num % 10 + '0';
		num /= 10;
	}
	if (is_negative)
		str[0] = '-';
	str[get_num_length(n)] = '\0';
	return (str);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putstr(ft_itoa(par[i].size));
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		free(par[i].copy);
		i++;
	}
	free(par);
}

// int	main(int argc, char *argv[])
// {
// 	if (argc < 2)
// 		return (-1);

// 	t_stock_str *stored;
// 	stored = ft_strs_to_tab(argc - 1, argv + 1);
// 	ft_show_tab(stored);
// 	return (0);
// }
