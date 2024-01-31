/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psetthak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 23:40:11 by psetthak          #+#    #+#             */
/*   Updated: 2024/01/30 15:48:36 by psetthak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '~')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*int main(void)
{
	printf("%d\n", ft_str_is_printable("Ak12~!@#$%^&*()"));
	printf("%d\n", ft_str_is_printable(""));
	printf("%d\n", ft_str_is_printable(" "));
	printf("%d\n", ft_str_is_printable("\n\t\v\f"));
}*/
