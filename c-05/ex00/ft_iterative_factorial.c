/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: komethaw <komethaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:53:52 by komethaw          #+#    #+#             */
/*   Updated: 2024/01/28 16:54:55 by komethaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	index;

	if (nb < 0)
		return (0);
	index = 1;
	factorial = 1;
	while (index < nb + 1)
		factorial = factorial * index++;
	return (factorial);
}
