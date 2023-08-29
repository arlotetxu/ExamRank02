/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:31:13 by jflorido          #+#    #+#             */
/*   Updated: 2023/08/19 19:46:59 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int		op1;
	int		op2;
	int	result;

	result = 0;
	if (argc == 4)
	{
		op1 = atoi(argv[1]);
		printf("Operando 1: %d\n", op1);
		op2 = atoi(argv[3]);
		printf("Operando 2: %d\n", op2);
		if (argv[2][0] == '+')
			result = op1 + op2;
		if (argv[2][0] == '-')
			result = op1 - op2;
		if (argv[2][0] == '*')
			result = op1 * op2;
		if (argv[2][0] == '/')
			result = op1 / op2;
		if (argv[2][0] == '%')
			result = op1 % op2;
		printf("%d\n", result);
	}
	else
		write(1, "\n", 1);
	return (0);
}
