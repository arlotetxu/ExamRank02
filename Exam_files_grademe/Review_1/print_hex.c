/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 18:05:44 by jflorido          #+#    #+#             */
/*   Updated: 2023/10/01 18:44:28 by jflorido         ###   ########.fr       */
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

int	ft_fast_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '-')
		sign = -1;
	while (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);	
}

void	ft_get_value (int nb)
{
	int		index;
	char	*vals;
	
	vals = "0123456789abcdef";
	if (nb >= 16)
		ft_get_value(nb / 16);
	index = nb % 16;
	write(1, &vals[index], 1);
}

int	main(int ac, char **av)
{
	int	nb;

	if (ac == 2)
	{
		nb = ft_fast_atoi(av[1]);
		ft_get_value(nb);
	}
	write(1, "\n", 1);
	return (0);	
}
