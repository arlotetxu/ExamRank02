/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:09:01 by jflorido          #+#    #+#             */
/*   Updated: 2023/09/06 15:41:19 by jflorido         ###   ########.fr       */
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
42-School-Exam-Rank-02/Level 3/tab_mult at
*/

//Quick_atoi
//ft_strlen;

#include <stdio.h>
#include <unistd.h>

int	ft_quick_atoi(char *str)
{
	int	i;
	int	res;

	i = -1;
	res = 0;
	while (str[++i])
		res = res * 10 + (str[i] - '0');
	return (res);
}

void	ft_put_nb(int n)
{
	char	res;

	res = 0;
	if (n > 9)
		ft_put_nb(n / 10);
	res = (n % 10) + '0';
	write(1, &res, 1);
}

void	ft_print(char *nb)
{
	int		i;
	int		j;
	int	res;

	i = 0;
	while (++i <= 9)
	{
		j = -1;
		res = ft_quick_atoi(nb) * i;
		ft_put_nb(i);
		write(1, " x ", 3);
		while (nb[++j])
			write(1, &nb[j], 1);
		write(1, " = ", 3);
		ft_put_nb(res);
		if (i < 9)
			write(1, "\n", 1);
	}
}

int	main(int ac, char **av)
{
	if (ac > 1)
		ft_print(av[1]);
	else
		write(1, "\n", 1);
	return (0);
}
