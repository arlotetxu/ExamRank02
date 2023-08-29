/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:43:03 by jflorido          #+#    #+#             */
/*   Updated: 2023/08/29 16:49:02 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	reverese_bits(unsigned char octet)
{
	unsigned char	res;
	int				i;

	res = 0;
	i = 0;
	while (i < 8)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i++;
	}
	return (res);
}

int	main(void)
{
	unsigned char c = 'a';
	printf("Res: %c\n", reverese_bits(c));
	return (0);
}