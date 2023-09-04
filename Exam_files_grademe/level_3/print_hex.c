/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:34:24 by jflorido          #+#    #+#             */
/*   Updated: 2023/09/04 20:45:16 by jflorido         ###   ########.fr       */
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

#include <unistd.h>
#include <stdio.h>

int	ft_quick_atoi(char *str)
{
	int	i;
	int	n;

	i = -1;
	n = 0;
	while (str[++i])
		n = n * 10 + (str[i] - '0');
	return (n);
}

void	ft_print_nb()
{
		
}

int	main(void)
{
	printf("Atoi: %d\n", ft_quick_atoi("127"));
	return (0);
}