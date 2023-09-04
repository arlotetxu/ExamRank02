/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:04:17 by jflorido          #+#    #+#             */
/*   Updated: 2023/09/04 19:14:29 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : pgcd
Expected files   : pgcd.c
Allowed functions: printf, atoi, malloc, free
--------------------------------------------------------------------------------

Write a program that takes two strings representing two strictly positive
integers that fit in an int.

Display their highest common denominator followed by a newline (It's always a
strictly positive integer).

If the number of parameters is not 2, display a newline.

Examples:

$> ./pgcd 42 10 | cat -e
2$
$> ./pgcd 42 12 | cat -e
6$
$> ./pgcd 14 77 | cat -e
7$
$> ./pgcd 17 3 | cat -e
1$
$> ./pgcd | cat -e
$
*/
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	a;
	int	b;
	int	min;
	int	i;
	int	res;

	if (ac == 3)
	{
		a = atoi(av[1]);
		b = atoi(av[2]);
		min = b;
		if (b > a)
			min = a;
		i = 0;
		res = 0;
		while (++i < min)
			if (a % i == 0 && b % i == 0)
				res = i;
		printf("%d", res);
	}
	printf("\n");
	return (0);
}
