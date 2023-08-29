/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:02:23 by jflorido          #+#    #+#             */
/*   Updated: 2023/08/21 18:20:56 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	start, end;

	start = 0;
	end = 0;
	if (argc == 2)
	{
		while (argv[1][end])
			end++;
		end--;
		//printf("Final de cadena: %d\n", end);
		while (argv[1][end] && (argv[1][end] == 9 || argv[1][end] == 32))
			end--;
		//printf("Final de palabra: %d\n", end);
		start = end;
		while(start >= 0 && argv[1][start] != 9 && argv[1][start] != 32)
			start--;
		//printf("Inicio palabra: %d\n", start);
		while(++start <= end)
			write(1, &argv[1][start], 1);
	}
	write(1, "\n", 1);
	return (0);
}
