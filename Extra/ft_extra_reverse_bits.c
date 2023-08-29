//
// Created by Jose Manuel Florido Perena on 1/19/23.
//
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

#include"ExamRank02_Prep.h"

unsigned char	reverse_bits(unsigned char octet)
{
	int		i = 8;
	unsigned char	res = 0;

	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		write(1, &res, 1);
		i--;
	}
	return (res);
}

//int main(void)
//{
//	char	c;
//
//	c = '2';
//	reverse_bits(c);
//	return (0);
//}