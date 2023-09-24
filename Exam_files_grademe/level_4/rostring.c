/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:20:01 by jflorido          #+#    #+#             */
/*   Updated: 2023/09/24 19:35:49 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : rostring
Expected files   : rostring.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string and displays this string after rotating it
one word to the left.

Thus, the first word becomes the last, and others stay in the same order.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

Words will be separated by only one space in the output.

If there's less than one argument, the program displays \n.

Example:

$>./rostring "abc   " | cat -e
abc$
$>
$>./rostring "Que la      lumiere soit et la lumiere fut"
la lumiere soit et la lumiere fut Que
$>
$>./rostring "     AkjhZ zLKIJz , 23y"
zLKIJz , 23y AkjhZ
$>
$>./rostring "first" "2" "11000000"
first
$>
$>./rostring | cat -e
$
$>
*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_count_words(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = -1;
	while (str[++i])
	{
		if ((str[i] == ' ' || str[i] == '\t') && str[i + 1] != ' '
			&& str[i + 1] != '\t' && str[i + 1] != '\0')
			count++;
	}
	return (count);
}

char	*ft_first_word(char *str, int *posit)
{
	int		i;
	int		start;
	int		stop;
	char	*f_word;

	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\t'))
		i++;
	start = i;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
		i++;
	stop = i;
	*posit = stop + 1;
	f_word = (char *)malloc(sizeof(char) * (stop - start + 1));
	if (!f_word)
		return (NULL);
	i = 0;
	while (start < stop)
	{
		f_word[i] = str[start];
		start++;
		i++;
	}
	return (f_word);
}

void	ft_print(char *str, int posit)
{	
	while (str[posit] && (str[posit] == ' ' || str[posit] == '\t'))
		posit++;
	while (str[posit])
	{
		if (str[posit] != ' ' && str[posit] != '\t' && str[posit] != '\0')
			write(1, &str[posit], 1);
		if ((str[posit] == ' ' || str[posit] == '\t')
			&& str[posit + 1] != ' ' && str[posit + 1] != '\t' && str[posit + 1] != '\0')
			write(1, " ", 1);
		posit++;
	}
}

void	ft_print_first(char	*str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

int	main(void)
{
	char	*s;
	char	*first;
	int		posit;

	posit = 0;
	s = "  ultima vaya ";
	//printf("Number od words: %d\n", ft_count_words(s));
	first = ft_first_word(s, &posit);
	ft_print(s, posit);
	if (ft_count_words(s) > 1)
		write(1, " ", 1);
	ft_print_first(first);
	return (0);
}