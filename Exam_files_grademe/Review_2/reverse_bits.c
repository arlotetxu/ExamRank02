/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:17:07 by jflorido          #+#    #+#             */
/*   Updated: 2023/10/12 18:21:04 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Assignment name  : reverse_bits
Expected files   : reverse_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, reverses it, bit by bit (like the
example) and returns the result.

Your function must be declared as follows:

unsigned char	reverse_bits(unsigned char octet);

Example:

  1 byte
_____________
 0010  0110
	 ||
	 \/
 0110  0100
*/

unsigned char	reverse_bits(unsigned char octet)
{
	int				i;
	unsigned char	res;

	i = -1;
	res = 0;
	while (++i < 8)
	{
		res = (res * 2) + (octet % 2);
		octet = octet / 2;
	}
	return (res);
}