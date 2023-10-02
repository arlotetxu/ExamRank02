/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 19:10:14 by jflorido          #+#    #+#             */
/*   Updated: 2023/10/02 20:06:34 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);
*/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	ft_count_chars(int nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		nb = nb * (-1);
		count++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}
char	*ft_itoa(int nbr)
{
	int		len;
	int		to;
	char	*nb_str;

	len = ft_count_chars(nbr);
	nb_str = malloc(sizeof(char) * (len +1));
	if (!nb_str)
		return (NULL);
	to = 0;
	if (nbr == -2147483648)
		return ("-2147483648\0");
	if (nbr < 0)
	{
		nb_str[0] = '-';
		nbr = nbr * (-1);
		to = 1;
	}
	nb_str[len] = '\0';
	while (--len >= to)
	{
		nb_str[len] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (nb_str);
}

int	main(void)
{
	printf("Result: %s\n", ft_itoa(-214748364));
	printf("Limite inf: %d\n", INT_MIN);
	return (0);
}
