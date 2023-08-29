//
// Created by Jose Manuel Florido Pereña on 15/1/23.
//

#include "ExamRank02_Prep.h"

int ft_nb_len(int nb)
{
	int i;

	i = 0;
	while (nb > 0)
	{
		i++;
		nb = nb / 10;
	}
	return (i);
}

char	*ft_turn_string(char *str)
{
	size_t		i;
	size_t	j;
	char	*turned;

	i = 0;
	j = ft_strlen(str);
	turned = (char *) malloc(sizeof (char) * (j + 1));
	if (!turned)
		return (NULL);
	while (j > 0)
	{
		turned[i] = str[j - 1];
		i++;
		j--;
	}
	turned[i] = '\0';
	return (turned);
}

char	*ft_convert_nb_to_binary(int nb)
{
	int		reminder;
	int		i;
	char	*binary;
	char	*binary_sorted;
	int		len;

	i = 0;
	len = ft_nb_len(nb);
	binary = (char *)malloc (sizeof (char) * (len + 1));
	if (!binary)
		return (0);
	binary_sorted = (char *) malloc(sizeof (binary));
	if (!binary_sorted)
		return (0);
	while (nb > 0)
	{
		reminder = nb % 2;
		binary[i] = reminder + '0';
		nb = nb / 2;
		i++;
	}
	binary[i] = '\0';
	binary_sorted = ft_turn_string(binary);
	free(binary);
	printf("Cadena en binario: %s\n", binary_sorted);
	return (binary_sorted);
}

//int main(void)
//{
//	int		nb;
//	char	*binary;
//
//	nb = 9876;
//	binary = ft_convert_nb_to_binary(nb);
//	printf("the number %d in binary: %s\n", nb, binary);
//	return (0);
//}
