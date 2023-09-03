/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 20:16:46 by jflorido          #+#    #+#             */
/*   Updated: 2023/09/03 21:45:51 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Minimo comun multiplo
*/
#include<stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	n;
	unsigned int	max;
	unsigned int	min;

	if (!(a) || !(b))
		return (0);
	max = a;
	min = b;
	if (b > a)
	{
		max = b;
		min = a;
	}
	n = min;
	while (n <= max)
	{
		if (min % n == 0 && max % n == 0)
			return (n);
		n++;
	}
	return (0);
}

int	main(void)
{
	int	a = 10;
	int	b = 25;

	printf("Resultado LCM: %d\n", lcm(a, b));
	return (0);
}