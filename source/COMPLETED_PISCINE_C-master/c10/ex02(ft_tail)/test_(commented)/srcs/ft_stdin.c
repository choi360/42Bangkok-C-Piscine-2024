/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2020/09/22 15:30:25 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

void	ft_stdin(void)						/* Функция печатает символы из стандартного потока ввода */
{
	char	buffer;							/* Обьявляем перменную типа 'char' для временного хранения символа */
	int		r;								/* Обьявляем переменную которая будет хранить количество считаных в буфер символов */

	while ((r = read(0, &buffer, 1)))		/* Используя системный файловый дескриптор '0' мы порциями, по одному байту, cчитываем данные 
											** из стандартного потока ввода в переменную 'buffer' для временного хранения. 
											** После считывания порции данных из потока, функция сместит метку указывающую на адрес начала  
											** считывания, с которого функция должна начать читать данные, на другой адрес, который будет 
											** указывать на данные идущие после последних считаных данных.
											** После завершения работы функция вернет число отражающее количество считанных данных(в байтах). */
	{
		if (r == -1)						/* Проверяем число которое нам вернула функция 'read'. Если это число равно '-1' значит у нас произошла ошибка */
		{
			ft_putstr((char *)ft_get_strerr(errno));/* И мы запускаем функцию для печати подробной ошибки, отправляя ей в аргументы содержимое переменной
											** 'errno' хранящей номер последней ошибки программы и адрес строки, с которой была связана ошибка */
			break;							/* А после завершаем цикл */
		}
		else								/* Если это число не равно '-1' значит функция отработала успешно и 'buffer' содержит считанные данные */
		{
			write(1, &buffer, 1);			/* Печатаем содержимое буфера содержащего порцию считанных из файла данных */
		}
	}
}