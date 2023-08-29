
#include "ExamRank02_Prep.h"

int	ft_num_long(int n)
{
	int	counter;

	counter = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		counter++;
	while (n != 0)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}


char 	*ft_build_str(int n){
	char	*str;
	int 	digits;
	int 	is_neg;

	digits = ft_num_long(n);
	str = malloc(sizeof(char) * (digits + 1));
	if (!str)
		return (NULL);
	is_neg = 0;
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
		is_neg = 1;
	}
	if (n == 0)
		str[0] = '0';
	str[digits] = '\0';
	while (digits > is_neg)
	{
		str[digits - 1] = (n % 10) + '0';
		n = n / 10;
		digits--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;

	if (n == -2147483648)
	{
		str = malloc(sizeof (char) * 12);
		if (!str)
			return (NULL);
		str = "-2147483648";
	}
	else
		str = ft_build_str(n);
	return (str);
}

//int main(void)
//{
//	int	num;
//
//	num = -238547;
//	printf("String number: %s\n", ft_itoa(num));
//	return 0;
//}