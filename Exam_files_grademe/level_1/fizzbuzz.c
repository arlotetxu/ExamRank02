//
// Created by Jose Manuel Florido Pereña on 3/7/23.
//
#include <unistd.h>

void	ft_put_nbr(int nb)
{
	char result;
	if (nb > 9)
		ft_put_nbr(nb / 10);
	result = (nb % 10) + '0';
	write (1, &result, 1);
}

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write (1, "fizz", 4);
		else if (i % 5 == 0)
			write (1, "buzz", 4);
		else
			ft_put_nbr(i);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}