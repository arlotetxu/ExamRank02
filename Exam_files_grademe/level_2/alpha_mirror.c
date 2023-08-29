/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:56:33 by jflorido          #+#    #+#             */
/*   Updated: 2023/08/19 19:07:24 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc == 2)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] >= 65 && argv[i][j] <= 90)
				argv[i][j] = 65 + (90 - argv[i][j]);
			else if (argv[i][j] >= 97 && argv[i][j] <= 122)
				argv[i][j] = 97 + (122 - argv[i][j]);
			write(1, &argv[i][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
