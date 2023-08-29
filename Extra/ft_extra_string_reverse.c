//
// Created by Jose Manuel Florido Pereña on 7/1/23.
//

#include "ExamRank02_Prep.h"

void	ft_print_reversed(char *str)
{
	int	len;

	len = ft_strlen(str);
	while (len >= 0)
	{
		write (1, &str[len], 1);
		len--;
	}
}

//int main(void)
//{
//	char	*s;
//
//	s = "Text 1 to be checked";
//	ft_print_reversed(s);
//	return 0;
//}
