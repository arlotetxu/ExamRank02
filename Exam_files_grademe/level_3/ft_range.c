/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 12:35:40 by jflorido          #+#    #+#             */
/*   Updated: 2023/09/02 13:20:49 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	*ft_arr(int start, int end)
{
	int	dim;
	int	*arr;

	dim = start - end;
	if (dim < 0)
		dim = (dim * -1) + 1;
	else
		dim++;
	arr = malloc(sizeof(int) * dim);
	return (arr);
}

int	*ft_range(int start, int end)
{
	int	count_d;
	int	i;
	int	*arr_f;

	arr_f = ft_arr(start, end);
	count_d = 1;
	if (start > end)
	count_d = -1;
	i = 0;
	while (start != end)
	{
		arr_f[i] = start;
		if (count_d == 1)
			start++;
		else
			start--;
		i++;
	}
	arr_f[i] = start;
	return (arr_f);
}

int	main(void)
{
	int	*arr_i;
	int	i = 0;

	arr_i = ft_range(7, -5);
	while (i < 13)
	{
		printf("Array i = %d : %d\n", i, arr_i[i]);
		i++;
	}
	return (0);
}
