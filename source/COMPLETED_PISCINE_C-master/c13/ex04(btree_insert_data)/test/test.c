/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2020/12/18 15:40:15 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*         команда для компиляции и одновременного запуска                    */
/*                                                                            */
/*  gcc -Wall -Werror -Wextra test.c && chmod +x ./a.out && ./a.out           */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h> 
#include "ft_btree.h"

/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (*(str + i))
		i++;
	write(1, str, i);
}

/* ************************************************************************** */

void	btree_apply_infix_mod(t_btree *root, void (*applyf)(void *), unsigned int i)
{
	if (root)
	{
		unsigned int j;

		j = i;
		if (root->left)
			btree_apply_infix_mod(root->left, applyf, (i + 1));
		while (j--)
		{
			ft_putchar('\t');
		}
		ft_putchar('(');
		(*applyf)(root->item);
		ft_putchar(')');
		ft_putchar('\n');
		ft_putchar('\n');
		if (root->right)
			btree_apply_infix_mod(root->right, applyf, (i + 1));
	}
}


/* ************************************************************************** */

t_btree	*btree_create_node(void *item)
{
	t_btree		*tree;

	if ((tree = (t_btree *)malloc(sizeof(t_btree))))
	{
		tree->left = ((void *)0);
		tree->right = ((void *)0);
		tree->item = item;
	}
	return (tree);
}

/* ************************************************************************** */


void	btree_insert_data(t_btree **root, void *item, \
							int (*cmpf)(void *, void *))
{	
	if (!(*root))

		*root = btree_create_node(item);
	else if ((*cmpf)(item, (*root)->item) < 0)
		btree_insert_data(&(*root)->left, item, cmpf);
	else
		btree_insert_data(&(*root)->right, item, cmpf);
}


/* ************************************************************************** */

int 	main(void)
{
	t_btree 	*root;

	root = ((void *)0);
	btree_insert_data(&root, "5", (void *)&ft_strcmp);
	btree_insert_data(&root, "3", (void *)&ft_strcmp);
	btree_insert_data(&root, "8", (void *)&ft_strcmp);
	btree_insert_data(&root, "4", (void *)&ft_strcmp);
	btree_insert_data(&root, "1", (void *)&ft_strcmp);
	btree_insert_data(&root, "9", (void *)&ft_strcmp);
	btree_insert_data(&root, "7", (void *)&ft_strcmp);
	btree_insert_data(&root, "6", (void *)&ft_strcmp);
	btree_insert_data(&root, "2", (void *)&ft_strcmp);
	btree_insert_data(&root, "4", (void *)&ft_strcmp);
	btree_insert_data(&root, "7", (void *)&ft_strcmp);

	ft_putstr(" ------------------------------------------- \n");
	ft_putstr("|   Input data   |  5.3.8.4.1.9.7.6.2.4.7.  |\n");
	ft_putstr(" ------------------------------------------- \n\n");
	ft_putstr(" ------------------------------------------- \n");
	ft_putstr("|          Sorted results in tree           |\n");
	ft_putstr("|-------------------------------------------|\n");
	btree_apply_infix_mod(root, (void *)&ft_putstr, 1);
	ft_putstr("|                                           |\n");
	ft_putstr(" ------------------------------------------- \n");

	return (0);
}


/* ************************************************************************** */
