//
// Created by Jose Manuel Florido Pereña on 14/1/23.
//

#include "ExamRank02_Prep.h"

int	ft_largest_nb(int *list, int len)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (len > (j))
	{
		if (list[i] >= list[j])
			j++;
		else
		{
			i = j;
			j = 0;
		}
	}
	return (list[i]);
}

//int main(void)
//{
//	int	nbs[4];
//	int len;
//
//	nbs[0] = 152;
//	nbs[1] = 35;
//	nbs[2] = 33;
//	nbs[3] = 28;
//	len = sizeof (nbs) / sizeof (nbs[0]);
//	printf("Mayor numero: %d\n", ft_largest_nb(nbs, len));
//	return 0;
//}