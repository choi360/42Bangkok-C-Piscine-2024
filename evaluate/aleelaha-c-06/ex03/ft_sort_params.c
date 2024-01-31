/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleelaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:33:26 by aleelaha          #+#    #+#             */
/*   Updated: 2024/01/30 23:48:48 by aleelaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int		pos;
	char	cur;

	pos = 0;
	while (str[pos] != '\0')
	{
		cur = str[pos];
		write(1, &cur, 1);
		pos++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	min;
	int	mplus;
	int	print;

	i = 1;
	while (i < argc)
	{
		min = i;
		mplus = min + 1;
		while (mplus < argc)
		{
			if (ft_strcmp(argv[mplus], argv[min]) <= 0)
				min = mplus;
			mplus++;
		}
		ft_swap(&argv[i], &argv[min]);
		i++;
	}
	print = 1;
	while (print < argc)
	{
		ft_putstr(argv[print]);
		print++;
	}
}
