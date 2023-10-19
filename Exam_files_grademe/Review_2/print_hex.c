/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 19:48:44 by jflorido          #+#    #+#             */
/*   Updated: 2023/10/13 20:11:47 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : print_hex
Expected files   : print_hex.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a positive (or zero) number expressed in base 10,
and displays it in base 16 (lowercase letters) followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./print_hex "10" | cat -e
a$
$> ./print_hex "255" | cat -e
ff$
$> ./print_hex "5156454" | cat -e
4eae66$
$> ./print_hex | cat -e
$
*/
#include <stdio.h>
#include <unistd.h>

int	ft_atoi_(char *nb)
{
	int	i;
	int	sign;
	int	res;

	sign = 1;
	res = 0;
	i = 0;
	while (nb[i] == ' ' || nb[i] == '\t')
		i++;
	if (nb[i] == '-')
		sign = -1;
	while (nb[i] == '+' || nb[i] == '-')
		i++;
	//Function to check the number of signs
	while(nb[i] >= '0' && nb[i] <= '9')
	{
		res = res * 10 + (nb[i] - '0');
		i++;
	}
	return (res * sign);
}

void	ft_print_hexa(int	nb)
{
	int		res;
	char	*values;

	values = "0123456789abcdef";
	res = 0;
	if (nb > 16)
		ft_print_hexa(nb / 16);
	res = nb % 16;
	write(1, &values[res], 1);
}


int	main(int ac, char **av)
{
	if (ac == 2)
		ft_print_hexa(ft_atoi_(av[1]));
	write(1, "\n", 1);
	return (0);
}