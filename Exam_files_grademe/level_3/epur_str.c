/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:23:02 by jflorido          #+#    #+#             */
/*   Updated: 2023/08/30 16:40:44 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int	i;

	if (ac == 2 && av[1][0])
	{
		i = 0;
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while (av[1][i])
		{
			if (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i] != '\0')
				write(1, &av[1][i], 1);
			if ((av[1][i] == ' ' || av[1][i] == '\t') &&
				av[1][i + 1] != ' ' && av[1][i + 1] != '\t' &&
				av[1][i + 1] != '\0')
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
