/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:31:35 by jflorido          #+#    #+#             */
/*   Updated: 2023/09/04 18:47:53 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write a program that displays the number of arguments passed to it, followed by
a newline.

If there are no arguments, just display a 0 followed by a newline.

Example:

$>./paramsum 1 2 3 5 7 24
6
$>./paramsum 6 12 24 | cat -e
3$
$>./paramsum | cat -e
0$
$>
*/
#include <stdio.h>
#include <unistd.h>

void	ft_put_nb(int n)
{
	char	c;
	
	if (n > 9)
		ft_put_nb(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	(void)av;
	if (ac > 1)
		ft_put_nb(ac - 1);
	else
		ft_put_nb(0);
	write(1, "\n", 1);
	return (0);
}