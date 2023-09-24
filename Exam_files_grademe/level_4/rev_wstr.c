/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:18:51 by jflorido          #+#    #+#             */
/*   Updated: 2023/09/24 10:49:49 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : rev_wstr
Expected files   : rev_wstr.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string as a parameter, and prints its words in
reverse order.

A "word" is a part of the string bounded by spaces and/or tabs, or the
begin/end of the string.

If the number of parameters is different from 1, the program will display
'\n'.

In the parameters that are going to be tested, there won't be any "additional"
spaces (meaning that there won't be additionnal spaces at the beginning or at
the end of the string, and words will always be separated by exactly one space).

Examples:

$> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
ironic? it Isn't gatherings. love I But people! hate You$
$>./rev_wstr "abcdefghijklm"
abcdefghijklm
$> ./rev_wstr 
Leviosa Wingardium$
$> ./rev_wstr | cat -e
$
$>
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_count_words(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] == ' ' || str[i] == '\t')
			i++;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t' && (str[i + 1] == ' '
				|| str[i + 1] == '\t' || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

char	*ft_take_word(char	*str, int start, int stop)
{
	char	*str_res;
	int		i;

	str_res = (char *)malloc(sizeof(char) * (stop - start + 1));
	if (!str_res)
		return (NULL);
	i = 0;
	while (start < stop)
		str_res[i++] = str[start++];
	str_res[i] = '\0';
	//printf("Palabra: %s\n", str_res);
	return (str_res);
}

char	**ft_save_words(char *str)
{
	int		nb_words;
	char	**str_ret;
	int		i;
	int		start;
	int		stop;

	nb_words = ft_count_words(str);
	str_ret = (char **)malloc (sizeof (char *) * nb_words);
	if (!str_ret)
		return (NULL);
	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i] && --nb_words >= 0)
	{
		start = i;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
			i++;
		stop = i;
		str_ret[nb_words] = ft_take_word(str, start, stop);
		i++;
	}
	return (str_ret);
}

void	ft_print_words(char **str, char *or_str)
{
	int	i;
	int	j;
	int	w_count;

	w_count = ft_count_words(or_str) - 1;
	i = -1;
	while (++i <= w_count)
	{
		j = 0;
		while (str[i][j])
		{
			write(1, &str[i][j], 1);
			j++;
		}
		if (i < w_count)
			write(1, " ", 1);
	}
}

int	main(int ac, char **av)
{
	char	**res;

	if (ac == 2)
	{
		res = ft_save_words(av[1]);
		ft_print_words(res, av[1]);
	}
	write(1, "\n", 1);
	return (0);
}
