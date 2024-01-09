/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2020/11/16 17:00:03 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*         команда для компиляции и одновременного запуска                    */
/*                                                                            */
/*  gcc -Wall -Werror -Wextra test.c && chmod +x ./a.out && ./a.out           */
/* ************************************************************************** */

#include <unistd.h>						/* Подключаем библиотеку содержащую функцию "write" */
#include <stdlib.h>						/* Подкоючаем библиотеку содержащую функцию для выделения памяти(malloc) и функцию для
										** подсчета размера (sizeof) и функцию(free) для освобождения выделеной памяти */
#include "ft_list.h"					/* Подключаем заголовочный файл содержащий нужную нам структуру */


/* ************************************************************************** */

void		ft_putchar(char c)			/* Функция печати символа */
{
	write(1, &c, 1);
}

/* ************************************************************************** */

void		ft_putstr(char *str)		/* Функция печатает строку */
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	write(1, str, i);
}

/* ************************************************************************** */

void		ft_put_list(t_list *list)	/* Функция печати связанных между собой экземпляров структуры типа 't_list' */
{
	while (list)
	{
		ft_putstr((char *)list->data);
		list = list->next;
	}
}

/* ************************************************************************** */

t_list		*ft_create_elem(void *data)	/* Функция создает экземпляр структуры типа t_list, заполняет его данными - адрес из указателя data
										** в первый элемент экземпляра структуры, нулевой адрес во второй элемент экземпляра структуры. И в 
										** конце функция его возвращает адрес созданого экземпляра структуры типа t_list*/
{
	t_list	*tmp;						/* Обьявляем указатель структуры типа t_list для хранения там адреса экземпляра структуры типа t_list */

	if ((tmp = (t_list *)malloc(sizeof(t_list))) == ((void *)0))/* Инициализируем указатель, сохраняя туда адрес выделеной под экземпляр памяти */
		return ((void *)0);										/* Если память не выделилась то завершаем функцию и возвращаем нулевой указатель */
	tmp->next = ((void *)0);			/* Заполняем Экземпляр структуры типа t_list записывая в этот элемент экземпляра структуры нулевой указатель */
	tmp->data = data;					/* Заполняем Экземпляр структуры типа t_list записывая в этот элемент экземпляра структуры адрес принятого
										** в аргументах элемента неизвестного типа */
	return (tmp);						/* Завершаем функцию и возвращаем адрес созданного нами экземпляра структуры типа t_list */
}

/* ************************************************************************** */

void		ft_list_reverse(t_list **begin_list)	/* Функция переворачивает цепь связанных между собой экземпляров структур */
{
	t_list	*new_start;					/* Обьявляем указатель для хранения в нем адреса первого экземпляра новой цепи частично
										**  перевернутых на данный момент и связанных между собой экземпляров структур */
	t_list	*tmp;						/* Обьявляем указатель для сохранения туда адреса представляющего оставшуюся часть 
										** не перевернутой напи цепи экземпляров структур, для ипользования его в следующиих
										** итерациях цикла разворачивания цепи экземпляров структур */

	if (*begin_list || ((*begin_list)->next))/* Проверяем являеться ли полученый адресс экземпляра структуры проинициализированнным
										** и содержит ли экзепляр структуры адрес другого экземпляра структуры для переворачивания
										** этой цепи связанных между собой структур */
	{
		new_start = ((void *)0);		/* Инициализируем указатель, сохраняя в него нулевой адресс для "закупоривания первого 
										** экземпляра структуры в цепи связанных между собой структрур, чтобы переместить его 
										** в конец новой, перевернутой цепи и он не ссылался дальше на др. экземпляры т.к будет
										** являться последним в новой перевернутой цепи связанных  между собой экземпляров структур */
		while (*begin_list)				/* Запускаем цикл, который перевернет цепь связанных между собой экземпляров структур */
		{
			tmp = (*begin_list)->next;	/* Создаем резервную копию адреса указывающего на следующий экземпляр структуры */
			(*begin_list)->next = new_start;/* Перезаписываем указатель хранящий адрес следующего экземпляра используя сохраненный, 
										** с прошлой итерации цикла, адрес экземпляра структуры, который сейчас представляет начало 
										** выстроеной цепочки уже частично перевернутой цепи экземпляров структур */
			new_start = *begin_list;	/* Перезаписываем указатель, хранящий адрес первого экземпляра частично перевернутой цепи 
										** экземпляров структур, на, дополненый еще одним экземпляром, вариант цастично перевернутой 
										** цепи экземпляров структур */
			*begin_list = tmp;			/* Презаписываем указатель сохраняя туда адрес представляющий оставшуюся часть, еще не 
										** перевернутой напи, цепи экземпляров структур, для ипользования его в следующиих итерациях
										** цикла переворачивания цепи экземпляров структур */
		}
		*begin_list = new_start;		/* Записываем адрес экземпляра структуры(который стал последним элементом перемещенным в 
										** начало цепи связанных между собой экземпляров структуры в результате разворацивания 
										** этой цепи задом на перед) в указатель хранящий адрес первого экземпляра структуры,
										** цепи связанных между собой экземпляров структур */
	}
}


int			main(void)
{
	t_list	*list;						/* Обьявим указатель структуры типа 't_list' для хранения адреса экземпляра структуры типа 't_list' */

	list = ft_create_elem("Bro ");		/* Запустим фунцию которая создаст экземпляр структуры типа 't_list', заполнит его элементы
										(взяв для этого часть данных которыем мы ей отправим) и вернет адрес этого экземпляра 
										структуры типа t_list, который мы сохраним в указателе на экземпляр структуры типа 't_list' */
	list->next = ft_create_elem("Hey ");/* Запустим фунцию которая создаст экземпляр структуры типа 't_list', заполнит его элементы
										** (взяв для этого часть данных которыем мы ей отправим) и вернет адрес этого экземпляра
										** структуры типа 't_list'  И сохранит этот адрес в указателе на экземпляр структуры типа
										** 't_list', который хранится в одном из элементов  текущего экземпляра структуры, адрес
										** которой хранится в указателе 'list' */
	/* И создадим еще дополнительно несколько экземпляров структуры, которые свяжем между собой и с предыдущим экземпляром */
	list->next->next = ft_create_elem("Hello ");
	list->next->next->next = ft_create_elem("My ");
	list->next->next->next->next = ft_create_elem("Cool ");
	list->next->next->next->next->next = ft_create_elem("Friend ");

	ft_list_reverse(&list);				/* Отрпавляем адрес указателя хранящего адрес первого экземпляра структуры цепи связанных
										** между собой экземпляров структур в функцию которая первернет эту цепь задом на перед */
	ft_put_list(list);					/* Запускаем функцию печати данных каждого экземпляра структуры цепи связанных между собой
										** экземпляров структур */
	ft_putchar('\n');					
										/* Печатаем символ переноса строки для кореектного отображения вывода */
	return (0);							/* Завершаем функцию и возвращаем ноль */
}