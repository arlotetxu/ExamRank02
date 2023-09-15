/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:22:09 by jflorido          #+#    #+#             */
/*   Updated: 2023/09/15 11:11:34 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : ft_list_remove_if
Expected files   : ft_list_remove_if.c
Allowed functions: free
--------------------------------------------------------------------------------

Write a function called ft_list_remove_if that removes from the
passed list any element the data of which is "equal" to the reference data.

It will be declared as follows :

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

cmp takes two void* and returns 0 when both parameters are equal.

You have to use the ft_list.h file, which will contain:

$>cat ft_list.h
typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;
$>
*/
#include "ft_list.h"
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*curr;
	t_list	*prev;

	prev = 0;
	curr = *begin_list;
	while (curr)
	{
		if ((cmp)(data_ref, curr->data) == 0)
		{
			if (prev == 0)
				*begin_list = curr->next;
			else
				prev->next = curr->next;
			free(curr);
		}
		prev = curr;
		curr = curr->next;
	}
}
#include <stdio.h>

void		ft_printlist(t_list *lst)
{
	while (lst)
	{
		printf("data : %d\n", (int)lst->data);
		lst = lst->next;
	}
}

t_list		*lst_new(void	*data)
{
	t_list		*lst;

	lst = (t_list*)malloc(sizeof(t_list));
	lst->next = 0;
	lst->data = data;
	return (lst);
}

int			cmp(void *a, void *b)
{
	if ((int)a == (int) b)
		return (0);
	else
		return (1);
}

int		main(void)
{
	t_list		*lst;

	lst = lst_new((void*)5);
	lst->next = lst_new((void*)3);
	lst->next->next = lst_new((void*)30);
	lst->next->next->next = lst_new((void*)6);
	lst->next->next->next->next = lst_new((void*)9);
	lst->next->next->next->next->next = lst_new((void*)5);
	lst->next->next->next->next->next->next = lst_new((void*)2);
	lst->next->next->next->next->next->next->next = lst_new((void*)4);
	ft_printlist(lst);
	ft_list_remove_if(&lst, (void*)30, &cmp);
	printf("---------------------------------------\n");
	ft_printlist(lst);
	return (0);
}