/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 17:24:07 by jflorido          #+#    #+#             */
/*   Updated: 2023/08/29 18:02:56 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

// char	*ft_union(char *str1, char *str2)
// {
// 	int		len1;
// 	int		len2;
// 	char	*str;

// 	str = malloc

// }

int	ft_check_char(char c, char *str, int start, int stop)
{
	while (start < stop)
	{
		if (str[start] == c)
			return (1);
		start++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	i;

	if (ac == 3)
	{
		i = 0;
		write(1, &av[1][i], 1);
		while (av[1][++i])
		{
			if (ft_check_char(av[1][i], av[1], 0, i) == 0)
				write(1, &av[1][i], 1);
		}
		i = -1;
		while (av[2][++i])
		{
			if (ft_check_char(av[2][i], av[1], 0, ft_strlen(av[1])) == 0 && 
				ft_check_char(av[2][i], av[2], 0, i) == 0)
				write(1, &av[2][i], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
