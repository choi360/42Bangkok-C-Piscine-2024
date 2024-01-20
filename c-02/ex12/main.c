/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmethawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:59:46 by kmethawa          #+#    #+#             */
/*   Updated: 2021/11/05 14:01:50 by kmethawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_print_memory(void *addr, unsigned int size);
void	ft_get_hex(unsigned long long nb, int prev);
void	ft_putchar(char c, int size);

int	main(void)
{
	int	i;

	char str[] = "Bonjour les amiseeeeeee\neeeeeeeedwadwadawdadwadwegfrsdhgrtdhtrdharewfwafwafeawfwFAWFAGAWGRESHSERHEStrgesgresgrtdhtyjreeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee";
	i = 150;
	ft_print_memory(str, i);
}

//00000010a161f40
//0x7fff57f54a40
