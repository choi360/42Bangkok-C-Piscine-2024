/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaksimo <mmaksimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:51:25 by mmaksimo          #+#    #+#             */
/*   Updated: 2024/01/30 20:35:36 by mmaksimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}	t_stock_str;

void		ft_strcpy(char *dest, char *src);
int			ft_strlen(char *str);
t_stock_str	*ft_strs_to_tab(int ac, char **av);
void		ft_show_tab(struct s_stock_str *par);

#endif
