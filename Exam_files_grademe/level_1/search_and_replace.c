//
// Created by Jose Manuel Florido Pereña on 4/7/23.
//
#include <unistd.h>

int main(int argc, char **argv)
{
	int i;

	if (argc == 4 && !argv[2][1] && !argv[3][1])
	{
		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] == argv[2][0])
				argv[1][i] = argv[3][0];
			write(1, &argv[1][i++], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}