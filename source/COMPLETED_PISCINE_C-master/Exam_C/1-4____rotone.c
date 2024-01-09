/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1-4____rotone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2021/01/03 23:51:04 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* ************************************************************************** */
/* ************************************************************************** */
/* **************************************************************************


Assignment name  : rotone
Expected files   : rotone.c
Allowed functions: write
--------------------------------------------------------------------------------


Напишите программу, которая берет строку и отображает ее, заменяя каждую из 
ее букв на следующую в алфавитном порядке. символ «z» становится символом «a»,
а символ «Z» становиться становится сиволом «A». Сама строка остается без изменений.
За выходом последует новая строка.


Если количество аргументов не равно 1, программа отображает новую строку.


Пример:

$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
$>


   ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */


#include <unistd.h>

void	ft_rotone(char *str)
{
	int		i;					/* для начала обьявим переменную для счетчика */
	
	i = 0;						/* инициализируем переменную для счетчика нулем */
	while (str[i])				/* Запускаем цикл. который пройдется по строке изменяя каждую букву на следующую и печатая ее пока не дойдет до конца */
	{
		if (str[i] >= 'A' && str[i] <= 'Y')		/* Если буква Верхнего регистра меняем ее на ледующую прибавляя один */
			str[i] += 1;
		if (str[i] >= 'a' && str[i] <= 'y')		/* Если буква нижнего регистра меняем ее на ледующую прибавляя один */
			str[i] += 1;
		if (str[i] == 'z' || str[i] == 'Z')		/* Если буква последняя в алфавите то вычитаем из нее 25 чтоб вернуться к началу и напечатать первую */
			str[i] -= 25;
		write(1, (str + i), 1);					/* Печатаем букву которую мы изменили */
		i++;									/* Увеличиваем счетчик и переходим к след ячейке массива */
	}
}



int		main(int argc, char *argv[])	/* здесь принимаем количество строк в массиве и сам массив со строками */
{
	if (argc == 2)						/* Проверяем есть ли там кроме имени программы в аргументах еще одна строка в которой мы хотим изменить буквы. */
		ft_rotone(argv[1]);
	write(1, "\n", 1);					/* Печатаем символ перехода на новую строку */
	return (0);							/* Завершаем программу */
}

