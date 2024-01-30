/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: komethaw <komethaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:57:52 by komethaw          #+#    #+#             */
/*   Updated: 2024/01/29 18:30:52 by komethaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int		sqrt;
	unsigned int		index;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (nb);
	index = 0;
	sqrt = index * index;
	while (sqrt <= (unsigned int)nb)
	{
		index++;
		sqrt = index * index;
	}
	index -= 1;
	if (index * index == (unsigned int)nb)
	{
		return (index);
	}
	else
	{
		return (0);
	}
}
