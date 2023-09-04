/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci_recursive.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:34:01 by jflorido          #+#    #+#             */
/*   Updated: 2023/09/03 18:39:42 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_recursive(int *arr_i, int n)
{
	if (n == 0)
		arr_i[n] = 0;
	else if (n == 1)
		arr_i[n] = 1;
	else
	{
		ft_recursive(arr_i, n - 1);
		arr_i[n] = arr_i[n - 1] + arr_i[n - 2];
	}
}

int	main(void)
{
	int	itera = 10;
	int arr_i[10 + 1];
	int	i = 0;

	ft_recursive(arr_i, itera);
	while (i <= itera)
	{
		printf("Valor %d: %d\n", i, arr_i[i]);
		i++;
	}
	return (0);
}