/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 19:24:53 by jflorido          #+#    #+#             */
/*   Updated: 2023/08/20 19:38:51 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_char(char *str, char c, int stop)
{
	int	i;

	i = 0;
	while (i < stop)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	len2;

	i = 0;
	len2 = 0;
	if (argc == 3)
	{
		while (argv[2][len2])
			len2++;
		while (argv[1][i])
		{
			if (ft_check_char(argv[2], argv[1][i], len2) == 1 &&
				ft_check_char(argv[1], argv[1][i], i) == 0)
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
