/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbannasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:19:24 by pbannasa          #+#    #+#             */
/*   Updated: 2024/01/19 16:23:29 by pbannasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(char a)
{
	if (a >= 'a' && a <= 'z')
		return (1);
	if (a >= 'A' && a <= 'Z')
		return (2);
	if (a >= '0' && a <= '9')
		return (3);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (check(str[0]) == 1)
		str[0] -= 32;
	i = 1;
	while (str[i])
	{
		if (check(str[i]) == 1 && check(str[i - 1]) == 0)
			str[i] -= 32;
		else if (check(str[i]) == 2 && check(str[i - 1]) > 0)
			str[i] += 32;
		i++;
	}
	return (str);
}
