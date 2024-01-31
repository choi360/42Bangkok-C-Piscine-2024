/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichompo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 10:25:24 by jichompo          #+#    #+#             */
/*   Updated: 2024/01/13 10:39:49 by jichompo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index;
	unsigned int	dest_index;

	index = 0;
	dest_index = 0;
	while (*(dest + dest_index))
		dest_index++;
	while (*src && index < nb)
	{
		*(dest + dest_index) = *src;
		index++;
		dest_index++;
		src++;
	}
	*(dest + dest_index) = '\0';
	return (dest);
}
