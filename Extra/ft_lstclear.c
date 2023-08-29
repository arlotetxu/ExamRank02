/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 16:09:41 by jflorido           #+#    #+#             */
/*   Updated: 2022/12/30 16:09:45 by jflorido          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ExamRank02_Prep.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *aux;

	while (*lst)
	{
		aux = (*lst) -> next;
		del((*lst) -> content);
		free (lst);
		*lst = NULL;
		*lst = aux;
	}
	*lst = NULL;
}