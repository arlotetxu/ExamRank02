/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:21:45 by jflorido          #+#    #+#             */
/*   Updated: 2023/10/13 16:12:00 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : ft_atoi_base
Expected files   : ft_atoi_base.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.

The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For
example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

Minus signs ('-') are interpreted only if they are the first character of the
string.

Your function must be declared as follows:

int	ft_atoi_base(const char *str, int str_base);
*/

#include <unistd.h>
#include <stdio.h>

char	ft_to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

int	ft_get_index(char c, int base)
{
	char	*values;
	int		i;

	values = "0123456789abcdef";
	i = -1;
	while (++i < base)
		if (ft_to_lower(c) == values[i])
			return (i);
	return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	sign;
	int	res;
	int	index;

	sign = 1;
	res = 0;
	index = 0;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str)
	{
		index = ft_get_index(*str, str_base);
		if (index >= 0)
			res = (res * str_base) + index;
		str++;
	}
	return (res * sign);
}

int	main()
{
	char c = 'H';
	printf("To lower: %c\n", ft_to_lower(c));
	printf("Index a: %d\n", ft_get_index('a', 16));
	printf("Atoi_base a: %d\n", ft_atoi_base("-aa", 12));
	return (0);
}
