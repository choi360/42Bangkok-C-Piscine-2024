/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2021/02/16 23:37:43 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*         команда для компиляции и одновременного запуска                    */
/*                                                                            */
/*  gcc -Wall -Werror -Wextra test.c && chmod +x ./a.out && ./a.out           */
/* ************************************************************************** */



#include <unistd.h>

/* ************************************************************************** */
/* ************************************************************************** */


void	ft_putchar(char c)			/* функция вывода символа */
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)		/* функция печати строки */
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	write(1, str, i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)/* принимаем адреса строк dest и src для копирования и размер массива dest*/
{
	unsigned int	i;					/* Обьявляем целочисленную переменную для счетчика */

	i = 0;								/* Инициализируем переменную для счетчика нулем чтобы начать с нулевой ячейки массива */
	while (src[i] && (i < (size - 1)))	/* Если ячейка массива src не хранит символ конца массива и счетчик i не достиг последней ячейки 
										 * массива dest то запускаем цикл копирования */
	{
		dest[i] = src[i];				/* Копируем символ из массива src в dest */
		i++;							/* Увеличиваем счетчик i для перехода к копированию след ячейки массива */
	}
	dest[i] = '\0';						/* добавляем после строки завершающий символ */
	return (i);							/* Завершаем функцию и возвращаем адресс строки в которую мы добывили символы из др. строки */
}



int 	main(void)
{
	char	r[] = {"Fuck.Fuck.Fuck.Fuck.Fuck.Fuck.Fuck.Fuck.Fuck.Fuck"};/* создадим исходную строку(массив символов) для теста */
	char	t[22];														/* создадим результирующую строку(массив символов) для теста */


	ft_strlcpy(t, r, 22);				/* отправим в функцию(для копирования) адреса массивов и размер результирующего массива */

	ft_putstr(t);						/* напечатаем результирующую строку для проверки */
	return (0);							/* завершаем функцию и возвращаем 0 */
}