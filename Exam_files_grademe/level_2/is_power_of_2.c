/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 19:51:14 by jflorido          #+#    #+#             */
/*   Updated: 2023/08/20 19:59:38 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	unsigned int	nb;

	nb = 2;
	// if (n == 0)
	// 	return (0);
	while (nb <= n)
	{
		if (nb == n)
			return (1);
		nb = nb * 2;
	}
	return (0);
}

int	main(void)
{
	unsigned int	n;

	n = 0;
	printf("Result (1 -> is power of 2): %d\n", is_power_of_2(n));
	return (0);
}
