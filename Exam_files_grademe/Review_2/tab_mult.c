/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:12:06 by jflorido          #+#    #+#             */
/*   Updated: 2023/10/14 12:01:03 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : tab_mult
Expected files   : tab_mult.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays a number's multiplication table.

The parameter will always be a strictly positive number that fits in an int,
and said number times 9 will also fit in an int.

INT_MAX: 2147483647
INT_MIN: -2147483648

If there are no parameters, the program displays \n.

Examples:

$>./tab_mult 9
1 x 9 = 9
2 x 9 = 18
3 x 9 = 27
4 x 9 = 36
5 x 9 = 45
6 x 9 = 54
7 x 9 = 63
8 x 9 = 72
9 x 9 = 81
$>./tab_mult 19
1 x 19 = 19
2 x 19 = 38
3 x 19 = 57
4 x 19 = 76
5 x 19 = 95
6 x 19 = 114
7 x 19 = 133
8 x 19 = 152
9 x 19 = 171
$>
$>./tab_mult | cat -e
$
$>
*/

#include <limits.h>
#include <unistd.h>
#include <stdio.h>

long	ft_atoi_tab(char *nb)
{
	int	i;
	long	res;
	int	sign;

	res = 0;
	sign = 1;
	i = 0;
	while (nb[i] == ' ' || nb[i] == '\t')
		i++;
	if (nb[i] == '-')
		sign = -1;
	while (nb[i] == '-' || nb[i] == '+')
		i++;
	//Function to count the number of signs
	while (nb[i] >= '0' && nb[i] <= '9')
	{
		res = res * 10 + (nb[i] - '0');
		i++;
	}
	return (res * sign);
}

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_putnb(int nb)
{
	char	res;

	if (nb > 9)
		ft_putnb(nb / 10);
	res = (nb % 10) + '0';
	ft_putchar(res);
}

void	ft_tab_mult(int	nb)
{
	int	mult;
	int	res;

	mult = 0;
	while (++mult <= 9)
	{
		res = nb * mult;
		ft_putnb(mult);
		write(1, " x ", 3);
		ft_putnb(nb);
		write(1, " = ", 3);
		ft_putnb(res);
		write(1, "\n", 1);
	}
}

int	main(int ac, char **av)
{
	long	arg;

	if (ac == 2)
	{
		arg = ft_atoi_tab(av[1]);
		if (arg > 2147483647 || arg < 0 || arg * 9 > 2147483647)
			return (0);
		ft_tab_mult(arg);
	}
	else
		write(1, "\n", 1);
	return (0);
}
