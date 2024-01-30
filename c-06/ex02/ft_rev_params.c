/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: komethaw <komethaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 21:13:48 by komethaw          #+#    #+#             */
/*   Updated: 2024/01/30 21:13:51 by komethaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
		index = argc - 1;
		while (index > 0)
		{
			ft_putstr(argv[index]);
			write(1, "\n", 1);
			index--;
		}
	}
	return (0);
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
