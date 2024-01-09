/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2020/10/19 15:07:17 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/* ************************************************************************** **
**
**  - Создайте функцию, которая отображает все возможные расстановки десяти 
**  ферзей на шахматной доске, которая будет содержать десять столбцов и десять
**  строк, без возможности досягаемости друг друга за один ход, и возвращает 
**  количество возможностей.
**
**  - Рекурсивность должна быть использована.
**
**
**  - Вот как функция должна быть обьявлена:
**
**		int	ft_ten_queens_puzzle(void);
**
**
**  - Вот как это будет отображаться:
--------------------------------------------------------------------------------
    >./a.out | cat -e
    0257948136$
    0258693147$
    ...
    4605713829$
    4609582731$
    ...
    9742051863$
    $>
--------------------------------------------------------------------------------
**
**  - Последовательность идет слева направо. Первая цифра представляет позицию
**  первой ферзя в первом столбце (индекс, начинающийся с 0). N-я цифра 
**  представляет позицию N-й королевы в N-м столбце.
**
**  - Возвращаемое значение должно быть общим количеством отображаемых решений.
**
**
**
** ************************************************************************** */
/* ************************************************************************** */

#include <unistd.h>

char	g_seq[11];
int		g_row[10];
int		g_diag1[19];
int		g_diag2[19];
int		g_cnt;

void	set_chk_var(int r, int c, int val)
{
	g_row[r] = val;
	g_diag1[c - r + 9] = val;
	g_diag2[r + c] = val;
}

void	rec(int c)
{
	int r;

	if (c == 10)
	{
		write(1, g_seq, 11);
		++g_cnt;
	}
	r = 0;
	while (r < 10)
	{
		if (!g_row[r] && !g_diag1[c - r + 9] && !g_diag2[r + c])
		{
			set_chk_var(r, c, 1);
			g_seq[c] = '0' + r;
			rec(c + 1);
			set_chk_var(r, c, 0);
		}
		++r;
	}
}

void	init(void)
{
	int i;

	g_seq[10] = '\n';
	g_cnt = 0;
	i = 0;
	while (i < 10)
	{
		g_row[i] = 0;
		g_diag1[i] = 0;
		g_diag2[i] = 0;
		++i;
	}
	while (i < 19)
	{
		g_diag1[i] = 0;
		g_diag2[i] = 0;
		++i;
	}
}

int		ft_ten_queens_puzzle(void)
{
	init();
	rec(0);
	return (g_cnt);
}


/* ************************************************************************** */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putout(int *board)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = board[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int		checkdiag(int a, int b)
{
	if (a >= b)
		return (a - b);
	else
		return (b - a);
}

int		checksafe(int nqueen, int *board)
{
	int i;

	i = 0;
	while (i < nqueen)
	{
		if ((board[nqueen] == board[i]) ||
				(checkdiag(board[nqueen], board[i]) == (nqueen - i)))
			return (0);
		i++;
	}
	return (1);
}

void	start(int nqueen, int *board, int *conta)
{
	board[nqueen] = 0;
	while (board[nqueen] < 10)
	{
		if (checksafe(nqueen, board))
		{
			if (nqueen == 9)
			{
				ft_putout(board);
				*conta = *conta + 1;
			}
			else
				start(nqueen + 1, board, conta);
		}
		board[nqueen]++;
	}
}

int		ft_ten_queens_puzzle(void)
{
	int board[10];
	int nqueen;
	int conta;

	conta = 0;
	nqueen = 0;
	start(nqueen, board, &conta);
	return (conta);
}


/* ************************************************************************** */
/* ************************************************************************** */


#include <unistd.h>

char	g_seq[11];
int		g_row[10];
int		g_diag1[19];
int		g_diag2[19];
int		g_cnt;

void	set_chk_var(int r, int c, int val)
{
	g_row[r] = val;
	g_diag1[c - r + 9] = val;
	g_diag2[r + c] = val;
}

void	rec(int c)
{
	int r;

	if (c == 10)
	{
		write(1, g_seq, 11);
		++g_cnt;
	}
	r = 0;
	while (r < 10)
	{
		if (!g_row[r] && !g_diag1[c - r + 9] && !g_diag2[r + c])
		{
			set_chk_var(r, c, 1);
			g_seq[c] = '0' + r;
			rec(c + 1);
			set_chk_var(r, c, 0);
		}
		++r;
	}
}

void	init(void)
{
	int i;

	g_seq[10] = '\n';
	g_cnt = 0;
	i = 0;
	while (i < 10)
	{
		g_row[i] = 0;
		g_diag1[i] = 0;
		g_diag2[i] = 0;
		++i;
	}
	while (i < 19)
	{
		g_diag1[i] = 0;
		g_diag2[i] = 0;
		++i;
	}
}

int		ft_ten_queens_puzzle(void)
{
	init();
	rec(0);
	return (g_cnt);
}


/* ************************************************************************** */
/* ************************************************************************** */

