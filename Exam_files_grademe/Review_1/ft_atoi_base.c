/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:42:32 by jflorido          #+#    #+#             */
/*   Updated: 2023/10/01 16:49:16 by jflorido         ###   ########.fr       */
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
	int	res;
	int	sign;
	
	sign = 1;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	res = 0;
	while (ft_get_index(*str, str_base) >= 0)
	{
		res = res * str_base + (ft_get_index(*str, str_base));
		str++;
	}
	return (res * sign);
}

int	main(int ac, char **av)
{
	(void)ac;
	printf("Resultado: %d\n", ft_atoi_base(av[1], 12));
	return (0);
}
