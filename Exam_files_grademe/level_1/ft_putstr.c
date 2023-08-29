//
// Created by Jose Manuel Florido Pereña on 3/7/23.
//
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

//int	main(void)
//{
//	char *str = "Esto es una cadena";
//
//	ft_putstr(str);
//	return (0);
//}