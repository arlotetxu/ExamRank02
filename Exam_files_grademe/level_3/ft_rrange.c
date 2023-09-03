/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 13:26:50 by jflorido          #+#    #+#             */
/*   Updated: 2023/09/02 13:38:35 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

/*
It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at end and end at start (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 3, 2 and 1
- With (-1, 2) you will return an array containing 2, 1, 0 and -1.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing -3, -2, -1 and 0.
*/

int	*ft_rrange(int start, int end)
{
	int	dim;
	int	i;
	int	*arr_f;

	dim = abs(start - end) + 1;
	arr_f = malloc(sizeof(int) * dim);
	i = 0;
	while (i < dim)
	{
		if (start < end)
		{
			arr_f[i] = end;
			end--;
			i++;
		}
		else
		{
			arr_f[i] = end;
			end++;
			i++;
		}
	}
	return (arr_f);
}

int	main(void)
{
	int	*arr_i;
	int	i = 0;

	arr_i = ft_rrange(-3, 3);
	while (i < 7)
	{
		printf("Array i = %d : %d\n", i, arr_i[i]);
		i++;
	}
	return (0);
}
