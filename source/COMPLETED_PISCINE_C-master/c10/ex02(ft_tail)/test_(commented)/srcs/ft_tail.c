/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2020/11/04 00:36:59 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

void	ft_tail(int argc, char **argv)					/* Принимаем в 'argc' количество строк, и адресс массива строк в '**argv' */
{
	int		fd;											/* Обьявляем переменную которая будет хранить идентификатор файлового потока(дескриптор файла) нашего файла.
														** (Файловый дескриптор — это неотрицательное число, которое является идентификатором
														** какого-либо потока ввода-вывода, который может быть связан с файлами, каталогами или сокетами.
														** Сами дескрипторы файлов привязаны к идентификатору процесса. Самые известные файловые дескрипторы - это 0, 1, 2.
														** Нулю соответствует STDIN(стандартный поток ввода), еденице соответствует STDOUT(стандартный поток вывода),
														** а двойке соответствует STDERR(стандартный поток ошибок). У каждой програмы есть все три этих системных потока.) */
	int		i;											/* Обьявляем счетчик для перемещения по массиву строк содержащих имена и путь до файлов */

	if (argc > 1)
	{
		g_progname = basename(*argv);					/* С помощью функции 'basename' получаем из полного пути к программе само имя программы и сохраняем
														** адрес строки с именем программы в глобальный указатель инициализируя его */
		i = 3;											/* Инициализируем счетчик числом указывающим на строку с первым возомжным именем файла для печати */
		while (i < argc)								/* Запускаем цикл, который откроет напечатает определенное количество данных с конца каждого файла */
		{
			if ((fd = open(argv[i], O_RDONLY)) == -1)	/* Отправляем в функцию 'open' строку с именем и путем до файла, а также флаг 'O_RDONLY'.
														** Благодраря пути до файла и флагу 'O_RDONLY' функция сразу из условия откроет поток для чтения из файла 
														** и вернет нам идентификатор этого потока (файловый дескриптор) который мы сохраним в 'fd'.
														** Как только мы получили результат работы функции мы сразу проверияем все ли прошло хорошо, сверяя
														** содержимое переменной 'fd', в котором должен быть дескриптор файла.
														** ЕСЛИ что то пойшло не так и функция может открыть поток до файла, то она вернет номер ошибки '-1' */
			{
				ft_display_custom_error(errno, argv[i]);/* Если функция вернула '-1', мы запускаем функцию для печати подробной ошибки, отправляя ей в
														** аргументы содержимое переменной 'errno' хранящей номер последней ошибки программы и адрес
														** строки, с которой была связана ошибка, а после игнорирует остальной код и переходим к печати следующего файла */
			}
			else										/* ЕСЛИ все прошло хорошо и мы получили в переменную 'fd' идентификатор потока (файловый дескриптор) 
														** то мы запускаем код, который считает из файла данные и напечатает их через стандартный поток вывода */
			{
				ft_display_file(i, fd, argc, argv);		/* Запускаем функцию, которая напечатает строго определенное количество байт с конца текущего файла */
				if (close(fd) == -1)					/* Закрываем файловый поток с помощью функции 'close' и дескриптора файла(идентификатора файлового потока).
														** И проверяем число которое нам вернула функция. Если это число равно '-1' значит у нас произошла ошибка 
														** закрытия файлового потока */
				{
					ft_display_custom_error(errno, argv[i]);/* Запускаем функцию для печати подробной ошибки, отправляя ей в аргументы содержимое переменной
														** 'errno' хранящей номер последней ошибки программы и адрес строки, с которой была связана ошибка */
				}
			}
			i++;										/* Увеличиваем счетчик для перехода к след строке с именем и путем до файла */
		}
	}
	else if (argc == 1)									/* Если массив строк содержит только имя и путь до программы то мы печатаем содержимое только самого файла программы */
		ft_stdin();										/* Запускаем функцию печати текста со стандартного потока ввода */
}