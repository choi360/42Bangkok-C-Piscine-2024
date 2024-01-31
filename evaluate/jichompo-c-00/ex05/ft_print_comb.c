/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichompo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:12:37 by jichompo          #+#    #+#             */
/*   Updated: 2024/01/17 17:39:09 by jichompo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_digits(char first, char second, char third)
{
	write (1, &first, 1);
	write (1, &second, 1);
	write (1, &third, 1);
	if (first == '7' && second == '8' && third == '9')
		return ;
	else
		write (1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	first_digit;
	char	second_digit;
	char	third_digit;

	first_digit = '0';
	while (first_digit <= '7')
	{
		second_digit = '1';
		while (second_digit <= '8')
		{
			third_digit = '2';
			while (third_digit <= '9')
			{
				if (third_digit > second_digit && second_digit > first_digit)
					ft_print_digits(first_digit, second_digit, third_digit);
				third_digit++;
			}
			second_digit++;
		}
		first_digit++;
	}
}
