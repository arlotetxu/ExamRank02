/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:35:23 by jflorido          #+#    #+#             */
/*   Updated: 2023/09/07 16:54:35 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : brainfuck
Expected files   : *.c, *.h
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a Brainfuck interpreter program.
The source code will be given as first parameter.
The code will always be valid, with no more than 4096 operations.
Brainfuck is a minimalist language. It consists of an array of bytes 
(in our case, let's say 2048 bytes) initialized to zero, 
and a pointer to its first byte.

Every operator consists of a single character :
- '>' increment the pointer ;
- '<' decrement the pointer ;
- '+' increment the pointed byte ;
- '-' decrement the pointed byte ;
- '.' print the pointed byte on standard output ;
- '[' go to the matching ']' if the pointed byte is 0 (while start) ;
- ']' go to the matching '[' if the pointed byte is not 0 (while end).

Any other character is a comment.

Examples:

$>./brainfuck "++++++++++[>+++++++>++++++++++>+++>+<<<<-]
>++.>+.+++++++..+++.>++.<<+++++++++++++++.>.+++.------.--------.>+.>." | cat -e
Hello World!$
$>./brainfuck "+++++[>++++[>++++H>+++++i<<-]>>>++\n<<<<-]>>--------.>+++++.>." | cat -e
Hi$
$>./brainfuck | cat -e
$
*/
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

void	ft_move_1(char *str)
{
	int	count_1;

	count_1 = 1;
	while (count_1 != 0)
	{
		str++;
		if (*str == '[')
			count_1++;
		if (*str == ']')
			count_1--;
	}
}

void	ft_move_2(char *str)
{
	int	count_2;

	count_2 = 1;
	while (count_2 != 0)
	{
		str--;
		if (*str == ']')
			count_2++;
		if (*str == '[')
			count_2--;
	}
}

void	ft_brainfuck(char *str)
{
	char	*base;
	int		i;
	int		count;

	base = malloc (sizeof (char) * (2048 + 1));
	i = -1;
	//count = 0;
	while (str[++i])
	{
		if (str[i] == '>')
			base++;
		else if (str[i] == '<')
			base--;
		else if (str[i] == '+')
			*base += 1;
		else if (str[i] == '-')
			*base -= 1;
		else if (str[i] == '.')
			write(1, base, 1);
		else if (str[i] == '[' && *base == 0)
			ft_move_1(&str[i]);
		else if (str[i] == ']' && *base != 0)
		{
			//ft_move_2(&str[i]);	// NO IDEA WHY THIS FUNCTION DOES NOT GIVE THE SAME RESULT
			count = 1;
			while (count != 0)
			{
				i--;
				if (str[i] == ']')
					count++;
				if (str[i] == '[')
					count--;
			}
		}
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_brainfuck(av[1]);
	else
		write(1, "\n", 1);
	return (0);
}