/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: komethaw <komethaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 21:13:08 by komethaw          #+#    #+#             */
/*   Updated: 2024/01/30 21:13:11 by komethaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *string);

int	main(int argc, char *argv[])
{
	char	*program_name;

	if (argc < 1)
	{
		write(1, "impossible", 11);
	}
	else
	{
		program_name = argv[0];
		ft_putstr(program_name);
		write(1, "\n", 1);
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
