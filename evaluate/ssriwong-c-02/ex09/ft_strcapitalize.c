/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssriwong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 13:12:41 by ssriwong          #+#    #+#             */
/*   Updated: 2024/01/28 13:12:49 by ssriwong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		firstchar;
	char	c;

	i = 0;
	firstchar = 1;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (firstchar == 1 && c >= 'a' && c <= 'z')
			str[i] -= 32;
		else if (firstchar == 0 && c >= 'A' && c <= 'Z')
			str[i] += 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 122)
			firstchar = 1;
		else
			firstchar = 0;
		i++;
	}
	return (str);
}
