/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:58:20 by jflorido          #+#    #+#             */
/*   Updated: 2023/10/02 16:29:38 by jflorido         ###   ########.fr       */
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
#include <stdlib.h>

void ft_move_1(char *str)
{
	int	count;

	count = 1;
	while (count != 0)
	{
		str++;
		if (*str == '[')
			count++;
		else if (*str == ']')
			count--;
	}
}

void ft_move_2(char *str)
{
	int	count;

	count = 1;
	while (count != 0)
	{
		str--;
		if (*str == '[')
			count--;
		else if (*str == ']')
			count++;
	}
}

void	ft_brainfuck(char *str)
{
	char	*base;

	base = malloc(sizeof(char) * 2048);
	while (*str)
	{
		if (*str == '>')
			base++;
		else if (*str == '<')
			base--;
		else if (*str == '+')
			*base += 1;
		else if (*str == '-')
			*base -= 1;
		else if (*str == '.')
			write(1, base, 1);
		else if (*str == '[' && *base == 0)
			ft_move_1(str);
		else if (*str == ']' && *base != 0)
		{
			int	count;

			count = 1;
			while (count != 0)
			{
				str--;
				if (*str == '[')
					count--;
				else if (*str == ']')
					count++;
			}
		}
			//ft_move_2(str);
		str++;
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
