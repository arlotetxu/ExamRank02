//
// Created by Jose Manuel Florido Perena on 1/16/23.
//
#include "ExamRank02_Prep.h"

void	ft_swap_values_pointer(int *i, int *j)
{
	int aux;

	aux = *i;
	*i = *j;
	*j = aux;
}

//int main(void)
//{
//	int a;
//	int	b;
//
//	a = 45;
//	b = 50;
//	printf("a value before: %d\n", a);
//	printf("b value before: %d\n", b);
//	ft_swap_values_pointer(&a, &b);
//	printf("a value after: %d\n", a);
//	printf("b value after %d\n", b);
//	return (0);
//}