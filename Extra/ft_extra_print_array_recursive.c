//
// Created by Jose Manuel Florido Perena on 1/16/23.
//

#include "ExamRank02_Prep.h"

void	ft_print_array_recursive(char *str, int start, int len)
{
	if (start == len)
		return;
	printf("%c", str[start]);
	ft_print_array_recursive(str, start + 1, len);
}

//int main(void)
//{
//	char *str;
//
//	str = "This is a test";
//	ft_print_array_recursive(str, 0, ft_strlen(str));
//	return 0;
//}