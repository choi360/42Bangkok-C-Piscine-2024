/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmethawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 21:46:30 by kmethawa          #+#    #+#             */
/*   Updated: 2021/11/10 21:46:34 by kmethawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
