//
// Created by Jose Manuel Florido Pereña on 15/1/23.
//

#include "ExamRank02_Prep.h"
#include <unistd.h>

void	ft_reverse_nb(int nb)
{
	int	rest;

	while (nb > 10)
	{
		rest = nb%10;
		printf("%d", rest);
		nb = nb / 10;
	}
	printf("%d", nb);
}

//int	main(void)
//{
//	int nb;
//
//	nb = 1234;
//	ft_reverse_nb(nb);
//	return (0);
//}