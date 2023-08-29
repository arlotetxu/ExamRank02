//
// Created by Jose Manuel Florido Pereña on 3/7/23.
//

#include <unistd.h>
#include <stdio.h>

void	ft_print_alpha(char c, int rep)
{
	int i = -1;

	while (++i < rep)
		write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int i = 0;
	int rep;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			rep = 1;
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				rep = argv[1][i] - 32 - 65 + 1;
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				rep = argv[1][i] - 64;
			ft_print_alpha(argv[1][i++], rep);
		}
	}
	write(1, "\n", 1);
	return (0);
}