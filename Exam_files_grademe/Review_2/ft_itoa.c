/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 18:05:26 by jflorido          #+#    #+#             */
/*   Updated: 2023/10/14 18:34:24 by jflorido         ###   ########.fr       */
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

int	ft_num_len(int nbr)
{
	int	len;

	len = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		len++;
	}
	while (nbr > 0)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	int		len;
	char	*ret;

	len = ft_num_len(nbr);
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (nbr == -2147483648)
		return ("-2147483648\0");
	if (nbr < 0)
	{
		ret[0] = '-';
		nbr *= -1;
	}
	ret[len] = '\0';
	len--;
	while (nbr > 0)
	{
		ret[len] = (nbr % 10) + '0';
		nbr /= 10;
		len--;
	}
	return (ret);
}

int	main(void)
{
	printf("ret: %s\n", ft_itoa(-2147483648));
	return (0);
}
