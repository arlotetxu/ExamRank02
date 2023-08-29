//
// Created by Jose Manuel Florido Perena on 1/16/23.
//

#include "ExamRank02_Prep.h"

unsigned long long ft_factorial_recursive(int nb)
{
	if (nb == 0)
		return (1);
	else
		return(nb * ft_factorial_recursive(nb - 1));
}

//int	main(void)
//{
//	int nb;
//
//	nb = 6;
//	printf("The factorial of %d is: %llu\n", nb, ft_factorial_recursive(nb));
//	return (0);
//}