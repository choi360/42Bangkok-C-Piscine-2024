/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2020/10/08 18:09:00 by evgenkarlson     ###   ########.fr       */
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

/* Функция побайтово сравнивает ASCI коды символов двух строк, адреса которых она приняла
 * в аргументах функции. Сравнение продолжается до встречи первого отличающегося символа 
 * или пока не будут проверены все символы строк.
 * Если все символы строк совпали, то возвращается 0. */

int		ft_strcmp(char *s1, char *s2)	/* Функция сравнивает две строки принимая в аргументах их адреса */
{
	while (*s1 && (*s1 == *s2))			/* Если не встретился символ конца строки и ячейки двух строк идентичны */
	{
		s1++;							/* то переходим к след ячейке строки s1 */
		s2++;							/* то переходим к след ячейке строки s2 */
	}
	return (*s1 - *s2);					/* Если все символы строк совпали, то завершаем функцию и возвращается 0.
										** Это произойдет за счет вычисления разности массивов. 
										** Если разницы нет то при вычислении вернется 0. 
										** 
										** Если разница есть то вернется разность той ячейки которые не совпали.
										** 
										** Положительное число – если строки отличаются и код первого отличающегося символа в
 										** строке s1 больше кода символа на той же позиции в строке s2.
										** 
										** Отрицательное число – если строки отличаются и код первого отличающегося символа в
										** строке s1 меньше кода символа на той же позиции в строке s2.*/
}

/* ************************************************************************** */
/* ************************************************************************** */

int 	main(void)
{
	/* Сравниваемые строки */
	char str1[] = {"1234567890"};
	char str2[] = {"1234577890"};
  
	/* Сравниваем первые пять символов двух строк */
	if (ft_strcmp(str1, str2) == 0)
    	write(1, "строки идентичны. ", 32);
	else
    	write(1, "строки разные. ", 26);
	write(1, "\n", 1);
	return (0);
}
