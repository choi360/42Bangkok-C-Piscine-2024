/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbannasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:26:58 by pbannasa          #+#    #+#             */
/*   Updated: 2024/01/18 10:34:43 by pbannasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] >= '0' && str[a] <= '9')
		{
			a++;
		}
		else
			return (0);
	}
	return (1);
}