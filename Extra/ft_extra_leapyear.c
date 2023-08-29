//
// Created by Jose Manuel Florido Pereña on 7/1/23.
//
#include <stdio.h>

void	ft_leapyear(void)
{
	int year;
	printf("Enter any year: ");
	scanf("%d", &year);
	(year%4==0 && year%100!=0) ? printf("%d is leap year",year) :
	(year%400 ==0 ) ? printf("LEAP YEAR") : printf("%d is not a leap year",year);
}

//int main(void)
//{
//	ft_leapyear();
//}
