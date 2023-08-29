//
// Created by Jose Manuel Florido Pereña on 4/7/23.
//
#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int len;

	if (argc == 2)
	{
		len = 0;
		while (argv[1][len] != '\0')
			len++;
		while (--len >= 0)
			write(1, &argv[1][len], 1);
	}
	write(1, "\n", 1);
	return (0);
}