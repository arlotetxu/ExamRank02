/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:54:46 by jflorido          #+#    #+#             */
/*   Updated: 2023/09/16 18:42:26 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : ft_split
Expected files   : ft_split.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes a string, splits it into words, and returns them as
a NULL-terminated array of strings.

A "word" is defined as a part of a string delimited either by spaces/tabs/new
lines, or by the start/end of the string.

Your function must be declared as follows:

char    **ft_split(char *str);
*/
#include <stdio.h>
#include <stdlib.h>

int	ft_count_words(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = -1;
	while (str[++i])
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0'
			&& (str[i + 1] == ' ' || str[i + 1] == '\t' ||
			str[i + 1] == '\n' || str[i + 1] == '\0'))
			count++;
	}
	return (count);
}

char	*ft_ret_str(char *str, int from, int to)
{
	int	i;
	char	*str_ret;

	str_ret = (char *)malloc(sizeof(char) * (to - from + 1));
	if (str_ret == NULL)
		return NULL;
	i = 0;
	while (from < to)
	{
		str_ret[i] = str[from];
		i++;
		from++;
	}
	str_ret[i] = '\0';
	return (str_ret);
}

void	ft_free(char **str)
{
	int	i;

	i = -1;
	while (str[++i])
		free(str[i]);
	free(str[i]);
	free(str);
}

char	**ft_split(char *str)
{
	char	**ret;
	int		start;
	int		stop;
	int		j;

	ret = (char **)malloc(sizeof (char *) * (ft_count_words(str) + 1));
	if (ret == NULL)
		return NULL;
	start = -1;
	stop = 0;
	 j = -1;
	while (str[++start])
	{
		while (str[start] &&  (str[start] == ' ' || str[start] == '\t' || str[start] == '\n'))
			start++;
		stop = start;
		while (str[stop] != ' ' && str[stop] != '\t' && str[stop] != '\n' && str[stop] != '\0')
			stop++;
		ret[++j] = ft_ret_str(str, start, stop);
		start = stop + 1;
	}
	return (ret);
}

int	main(void)
{
	char	*str;
	char	**test;
	int		i = -1;
	
	str = " Esto  es 	una 	prueba  de   \n texto	";
	test = ft_split(str);
	while (++i < ft_count_words(str))
		printf("Cadena[%d]: %s\n", i, test[i]);
	ft_free(test);
	return (0);
}