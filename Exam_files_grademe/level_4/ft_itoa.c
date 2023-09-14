/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:46:23 by jflorido          #+#    #+#             */
/*   Updated: 2023/09/13 18:44:38 by jflorido         ###   ########.fr       */
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
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int	ft_nb_len(int nb)
{
	int	count;

	count = 1;
	while (nb > 9)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int nbr)
{
	char	*nb_str;
	int		nb_len;

	if (nbr == -2147483648)
		return ("-2147483648\0");
	if (nbr < 0)
		nb_len = ft_nb_len(nbr * -1);
	else	
		nb_len = ft_nb_len(nbr);
	nb_str = malloc(sizeof(char) * (nb_len + 1));
	if (nb_str == NULL)
		return NULL;
	if (nbr < 0)
	{
		nb_str[0] = '-';
		nbr *= -1;
	}
	nb_str[nb_len] = '\0';
	while (nb_len > 0)
	{
		nb_str[nb_len] = (nbr % 10) + '0';
		nbr /= 10;
		nb_len--;
	}
	return (nb_str);
}

int	main(void)
{
	int	nb = -987654;
	char	*str;

	str = ft_itoa(nb);
	// printf("nb len: %d\n", ft_nb_len(nb));
	// printf("Impresion de numero: \n");
	printf("Resultado final: %s\n", str);
	//printf("Limite inferior int: %d\n", INT_MIN);
	return (0);	
}