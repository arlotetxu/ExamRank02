/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:53:28 by jflorido          #+#    #+#             */
/*   Updated: 2023/08/19 20:49:08 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	nb;

	nb = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		nb = (nb * 10) + (*str - 0);
		str++;
	}
	return (nb * sign);
}

int	main(void)
{
	char	*str;
	int		result;

	str = "123";
	result = ft_atoi(str);
	printf("Result: %d\n", result);
	result = atoi(str);
	printf("Result o: %d\n", result);
	return (0);
}
