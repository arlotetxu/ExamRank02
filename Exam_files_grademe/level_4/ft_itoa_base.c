/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:53:22 by jflorido          #+#    #+#             */
/*   Updated: 2023/09/14 19:08:35 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : ft_itoa_base
Expected files   : ft_itoa_base.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that converts an integer value to a null-terminated string
using the specified base and stores the result in a char array that you must
allocate.

The base is expressed as an integer, from 2 to 16. The characters comprising
the base are the digits from 0 to 9, followed by uppercase letter from A to F.

For example, base 4 would be "0123" and base 16 "0123456789ABCDEF".

If base is 10 and value is negative, the resulting string is preceded with a
minus sign (-). With any other base, value is always considered unsigned.

Your function must be declared as follows:

char	*ft_itoa_base(int value, int base);
*/

#include <stdlib.h>
#include <stdio.h>

int	ft_nb_len(int nb)
{
	int	count;

	count = 0;
	if (nb < 0)
		nb *= -1;
	while (nb > 0)
	{
		count++;
		nb /= 10;	
	}
	return (count);
}

char	*ft_itoa_base(int value, int base)
{
	char	ref[16] = "0123456789ABCDEF";
	char	*ret;
	int		len;

	len = ft_nb_len(value);
	if (value < 0 && base == 10)
		len++;
	ret = malloc(sizeof(char) * (len + 1));
	if (ret == NULL)
		return NULL;
	ret[len] = '\0';
	if (value < 0)
	{
		if (base == 10)
			ret[0] = '-';
		value *= -1;
	}
	len--;
	while (value > 0)
	{
		ret[len] = ref[(value % base)];
		value /= base;
		len--;
	}
	return (ret);
}

int	main(void)
{
	int	nb = -45845;
	printf("Count nb: %d\n", ft_nb_len(nb));
	printf("Result: %s\n", ft_itoa_base(nb, 11));
	return (0);
}