//
// Created by Jose Manuel Florido Pereña on 15/1/23.
//
/*
 * The Amstrong number is this got with the cube of its digits
 * example: 370 = 3^3 + 7^3 + 0^3
 */

#include "ExamRank02_Prep.h"
#include <math.h>
void	ft_check_amstrong(int nb)
{
	int	result;
	int	number;
	int	unit;

	result = 0;
	number = nb;
	while (number > 0)
	{
		unit = number % 10;
		result = result + (pow(unit, 3));
		number = number / 10;
	}
	if (result == nb)
		printf("The number %d IS an Amstrong number\n", nb);
	else
		printf("The number %d IS NOT an Amstrong number\n", nb);
}

//int main(void)
//{
//	int nb;
//
//	nb = 370;
//	ft_check_amstrong(nb);
//	return (0);
//}
