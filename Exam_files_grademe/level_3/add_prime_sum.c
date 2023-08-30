/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:23:56 by jflorido          #+#    #+#             */
/*   Updated: 2023/08/30 16:13:05 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnb(int nb)
{
	char digit;

	if (nb > 9)
		ft_putnb(nb / 10);
	digit = nb % 10 + '0';
		write(1, &digit, 1);
}

int	ft_quick_atoi(char *str)
{
	int	i;
	int sign;
	int	nb;

	i = 0;
	sign = 1;
	nb = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}

int	ft_check_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1); //es primo
}

int	main (int ac, char **av)
{
	int	sum;
	int	i;

	if (ac == 2 && ft_quick_atoi(av[1]) > 0)
	{
		sum = 0;
		i = 0;
		while (i <= ft_quick_atoi(av[1]))
		{
			if (ft_check_prime(i) == 1)
				sum = sum + i;
			i++;
		}
		ft_putnb(sum);
		//printf("Valor suma: %d", sum);
		write(1, "\n", 1);
	}
	else
		write(1, "0\n", 2);
	return (0);
}
