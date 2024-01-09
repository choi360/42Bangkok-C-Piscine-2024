/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2020/11/04 00:27:33 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

void	ft_cat(int argc, char **argv)		/* Принимаем в 'argc' количество строк, и адресс массива строк в '**argv' */
{
	int	i;									/* Обьявляем счетчик для перемещения по массиву строк */

	if (argc > 1)
	{
		g_progname = basename(*argv);		/* С помощью функции 'basename' получаем из полного пути к программе само имя программы и сохраняем
											** адрес строки с именем программы в глобальный указатель инициализируя его */
		i = 0;								/* Инициализируем счетчик */
		while (++i < argc)					/* Увеличиваем счечик 'i' чтоб пропустить число указывающее на строку содержащую имя и путь до программы
											** переходя к след строке. Проверяем услове. Если счетчик 'i' все еще указывает на строку содержащую имя и путь до
											** файла то мы запускаем цикл, который запускает функции печати содержимого этого файла */
		{
			if (argv[i][0] == '-' && argv[i][1] == '\0')/* Если текущая строка содержит только символ '-' то печатаем содержимое стандартного потока ввода */
				ft_stdin();					/* Запускаем функцию печати текста со стандартного потока ввода */
			else							/* В другом случае */
				ft_display_file(argv[i]);	/* Отправляем адресс строки, содержащей имя и путь до файла, в функцию для печати его содержимого */
		}
	}
	else if (argc == 1)						/* Если массив строк содержит только имя и путь до программы то мы печатаем содержимое только самого файла программы */
		ft_stdin();							/* Запускаем функцию печати текста со стандартного потока ввода */
}