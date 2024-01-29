/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: komethaw <komethaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:58:47 by komethaw          #+#    #+#             */
/*   Updated: 2024/01/29 18:58:52 by komethaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int		ft_strcmp(char *s1, char *s2);
void	ft_swap(char **a, char **b);
void	sort_array_of_string(char **array, int size);
void	ft_putstr(char *string);

int	main(int argc, char *argv[])
{
	int	index;

	if (argc == 0)
	{
		write(1, "impossible", 11);
	}
	else
	{
		sort_array_of_string(argv, argc - 1);
		index = 1;
		while (index < argc)
		{
			ft_putstr(argv[index]);
			write(1, "\n", 1);
			index++;
		}
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0' && s1[index] == s2[index])
	{
		index++;
	}
	if (s1[index] == s2[index])
	{
		return (0);
	}
	else if (s1[index] < s2[index] || s1[index] == '\0')
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}

void	sort_array_of_string(char **array, int size)
{
	int	round;
	int	index;

	round = 0;
	while (round <= size)
	{
		index = 1;
		while (index < size)
		{
			if (ft_strcmp(array[index], array[index + 1]) == 1)
			{
				ft_swap(&array[index], &array[index + 1]);
			}
			index++;
		}
		round++;
	}
}

void	ft_putstr(char *string)
{
	int	index;

	index = 0;
	while (string[index] != '\0')
	{
		write(1, string + index, 1);
		index++;
	}
}
