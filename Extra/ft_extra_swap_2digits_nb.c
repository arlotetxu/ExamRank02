//
// Created by Jose Manuel Florido Pereña on 15/1/23.
//
#include "ExamRank02_Prep.h"
#include <math.h>
int	ft_swap_2digits_nb(int nb)
{
	int	last;
	int	first;
	int	log;
	int	aux;
	int	swap;

	last = nb%10;
	log = (int)log10(nb);
	aux = nb;
	while (aux > 10)
		aux /= 10;
	first = aux;
	swap = (last * pow(10, log) + first) + (nb - (first * pow(10, log) + last));
	printf("nb: %d\n", nb);
	printf("First digit: %d\n", first);
	printf("Last digit: %d\n", last);
	printf("log10: %d\n", log);
	printf("swapped nb: %d\n", swap);
	return (swap);
}

//int	main(void)
//{
//	int	nb;
//
//	nb = 46855;
//	ft_swap_2digits_nb(nb);
//	return (0);
//}