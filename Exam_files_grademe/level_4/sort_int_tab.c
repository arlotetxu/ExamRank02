/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:05:19 by jflorido          #+#    #+#             */
/*   Updated: 2023/09/25 18:15:10 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : sort_int_tab
Expected files   : sort_int_tab.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

void sort_int_tab(int *tab, unsigned int size);

It must sort (in-place) the 'tab' int array, that contains exactly 'size'
members, in ascending order.

Doubles must be preserved.

Input is always coherent.
*/
#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int				aux;

	aux = 0;
	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			aux = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = aux;
			i = 0;
		}
		else
			i++;
	}
}

int	main(void)
{
	int		nb[9] = {3, 1, 7, 2, 0, 8, 3, 9, 12};
	sort_int_tab(nb, 9);
	int i = -1;
	while (++i <= 9)
		printf("%d, ", nb[i]);
	return (0);
}
