/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:13:12 by jflorido          #+#    #+#             */
/*   Updated: 2023/08/19 19:27:20 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	j;

	if (argc == 2)
	{
		j = 0;
		while (argv[1][j])
		{
			if (argv[1][j] >= 'A' && argv[1][j] <= 'Z')
			{
				write(1, "_", 1);
				argv[1][j] = argv[1][j] + 32;
			}
			write(1, &argv[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
