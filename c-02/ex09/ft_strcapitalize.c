/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmethawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 00:40:40 by kmethawa          #+#    #+#             */
/*   Updated: 2021/11/03 22:48:33 by kmethawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (j == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 'a' - 'A';
			j++;
		}
		else if (j > 0 && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 'a' - 'A';
		else if ((str[i] < '0') || (str[i] > '9' && str[i] < 'A')
			|| (str[i] > 'Z' && str[i] < 'a') || (str[i] > 'z'))
			j = 0;
		else
			j++;
		i++;
	}
	return (str);
}
