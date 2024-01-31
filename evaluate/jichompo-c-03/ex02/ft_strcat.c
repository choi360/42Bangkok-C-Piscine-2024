/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichompo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 09:29:14 by jichompo          #+#    #+#             */
/*   Updated: 2024/01/13 09:31:46 by jichompo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	index;

	index = 0;
	while (*(dest + index))
		index++;
	while (*src)
	{
		*(dest + index) = *src;
		index++;
		src++;
	}
	*(dest + index) = '\0';
	return (dest);
}
