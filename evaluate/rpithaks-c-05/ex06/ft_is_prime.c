/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 23:36:48 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/20 01:18:40 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	n;

	n = 1;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (nb);
	while (n * n < (unsigned int)nb)
	{
		n++;
	}
	return ((int)n);
}

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb <= 1)
	{
		return (0);
	}
	if (nb <= 3)
	{
		return (1);
	}
	while (n <= ft_sqrt(nb))
	{
		if (nb % n == 0)
		{
			return (0);
		}
		n++;
	}
	return (1);
}
