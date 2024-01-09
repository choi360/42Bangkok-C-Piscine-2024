/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2020/10/19 14:40:51 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/* ************************************************************************** **
**
**  Каталог сдачи задания: ex06/
**  Файлы для сдачи: ft_sort_int_tab.c	
**  Разрешенные функции: отсутствуют
**
** ************************************************************************** **
**
**  - Создайте функцию, которая сортирует массив (таблицу) целых чисел по возрастанию.
**
**  - Аргументами являются указатель на int и число ints в поле массив.
**
**  - Вот как это должно быть обьявлено:
**
**       void	ft_sort_int_tab(int *tab, int size);
**
**
** ************************************************************************** **
**
**  Скомпилируй файл тест. В нем можно увидеть как работает эта функция вживую
**
** ************************************************************************** */
/* ************************************************************************** */


void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}


/* ************************************************************************** */
/* ************************************************************************** */


void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int temp;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = -1;
		}
		i++;
		
	}
}


/* ************************************************************************** */
/* ************************************************************************** */


void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int i;
	int j;

	i = 0;
	while (i < size - 1)
	{
		j = i;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}


/* ************************************************************************** */
/* ************************************************************************** */