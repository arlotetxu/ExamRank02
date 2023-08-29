/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 11:40:53 by jflorido          #+#    #+#             */
/*   Updated: 2023/08/20 12:04:29 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	res;

	res = 0;
	while (*s1 || *s2)
	{
		res = *s1 - *s2;
		if (res != 0)
			return (res);
		s1++;
		s2++;
	}
	return (0);
}

int	main(void)
{
	int	result = 0;

	result = ft_strcmp("ABA", "ABZ");
	printf("Result: %d\n", result);
	return (0);
}
