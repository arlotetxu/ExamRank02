/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 20:16:46 by jflorido          #+#    #+#             */
/*   Updated: 2023/09/04 18:30:40 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Minimo comun multiplo
*/
#include<stdio.h>

// unsigned int	lcm(unsigned int a, unsigned int b)
// {
// 	unsigned int	n;
// 	unsigned int	max;
// 	unsigned int	min;

/* 	if (!(a) || !(b))
		return (0);
	max = a;
	min = b;
	if (b > a)
	{
		max = b;
		min = a;
	}
	n = max;
	while (n <= max)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		n++;
	}
	return (0);
} */

unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int n;

	if (a == 0 || b == 0)
		return (0);
	n = b;
	if (a > b)
		n = a;
	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		++n;
	}
	return (0);
}

int	main(void)
{
	int	a =4;
	int	b = 30;

	printf("Resultado LCM: %d\n", lcm(a, b));
	return (0);
}
