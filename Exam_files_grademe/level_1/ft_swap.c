//
// Created by Jose Manuel Florido Pereña on 3/7/23.
//
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

//int	main(void)
//{
//	int	a, b;
//
//	a = 4;
//	b = 8;
//	ft_swap(&a, &b);
//	printf("Valor de a: %d\n", a);
//	printf("Valor de b: %d\n", b);
//	return (0);
//}