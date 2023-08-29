//
// Created by Jose Manuel Florido Perena on 1/16/23.
//

#include "ExamRank02_Prep.h"

int ft_sum_recurssion(int start, int end)
{
	if (start == end)
		return (start);
	else
		return start + (ft_sum_recurssion(start + 1, end));
}

//int main(void)
//{
//	int nb;
//
//	nb = 20;
//	printf("The sum of first %d numbers is: %d\n", nb, ft_sum_recurssion(0,nb));
//	return (0);
//}