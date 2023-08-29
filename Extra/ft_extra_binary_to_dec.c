//
// Created by Jose Manuel Florido Pereña on 15/1/23.
//

#include "ExamRank02_Prep.h"

int	ft_binary_to_dec(char binario[])
{
	int decimal = 0;
	int i = 0;
	int longitud = strlen(binario);
	while (i < longitud)
	{
		if(binario[i] == '1')
			decimal = decimal + (1 << (longitud - 1 - i));
		i++;
	}
	return decimal;
}

//int main() {
//	char binary[] = "10100";
//	int decimal = ft_binary_to_dec(binary);
//	printf("The decimal number is: %d\n", decimal);
//	return 0;
//}