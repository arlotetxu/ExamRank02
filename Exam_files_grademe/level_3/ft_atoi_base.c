/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:43:03 by jflorido          #+#    #+#             */
/*   Updated: 2023/09/01 13:34:46 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <math.h>

int	ft_potencia(int	base, int pot)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	if (pot == 0)
		return (1);
	while (i < pot)
	{
		res = res * base;
		i++;
	}
	return (res);
}

int	ft_str_len(const char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	printf("Longitud cadena: %d\n", len);
	return (len);
}

int	ft_to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

int	ft_ret_value(char c, int base)
{
	int	i;
	char *hexa;

	hexa = "0123456789abcdef";
	i = 0;
	while (i <= base)
	{
		if (c == hexa[i])
			return (i);
		i++;
	}
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	res;
	int	val;
	int	len;

	i = 0;
	res = 0;
	val = 0;
	len = ft_str_len(str) - 1;
	while(str[i])
	{
		val = ft_ret_value(ft_to_lower(str[i]), str_base);
		res = res + (val * ft_potencia(str_base, len));
		i++;
		len--;
	}
	return (res);
}

int	main (void)
{
	int		ret_value;
	char	*value;

	value = "234F";
	ret_value = ft_atoi_base(value, 10);
	printf("Valor correspondiente: %d\n", ret_value);
	return (0);
}


