//
// Created by Jose Manuel Florido Pereña on 7/1/23.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int main(void) {
//	char  *str1;
//	char  *str2;
//	char  *final_str;
//	int    i;
//	int    j;
//
//	//printf("Introduce the 1st string: \n");
//	//scanf("%s", str1);
//	str1 = "Hola";
//	//printf("Introduce the 2nd string: \n");
//	//scanf("%s", str2);
//	str2 = "Guapo";
//
//	final_str = malloc(sizeof(char) * (strlen(str1) + strlen(str2) + 1));
//	if (final_str == NULL)
//		return (0);
//	i = 0;
//	while (str1[i])
//	{
//		final_str[i] = str1[i];
//		i++;
//	}
//	j = 0;
//	while (str2[j])
//	{
//		final_str[i+j] = str2[j];
//		j++;
//	}
//	final_str[i + j] = '\0';
//	printf("The final string: %s\n", final_str);
//	free (final_str);
//	return 0;
//}