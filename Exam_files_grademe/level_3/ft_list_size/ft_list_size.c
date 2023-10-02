/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 14:21:47 by jflorido          #+#    #+#             */
/*   Updated: 2023/10/02 15:55:16 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*check;
	int		count;

	check = begin_list;
	count = 0;
	while (check)
	{
		count++;
		check = check->next;
	}
	return (count);
}
