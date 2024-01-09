/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_func.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/13 16:22:58 by evgenkarlson      #+#    #+#             */
/*   Updated: 2020/10/19 15:04:21 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			jp_parse_sudoku_table(int pos[9][9], char **argv);

int			jp_print_sudoku(int pos[9][9]);

void		jp_set_pos(int *pos, int *orig, int i, int check);
