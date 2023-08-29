/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:37:39 by jflorido          #+#    #+#             */
/*   Updated: 2023/08/20 18:58:04 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The  strspn() function calculates the length (in bytes) of the initial segment of s which consists entirely of
       bytes in accept.
*/

#include <stdio.h>
#include <string.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;

	i = 0;
	while (s[i] && accept[i])
	{
		if (s[i] != accept[i])
			return (i);
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("Result: %ld\n", ft_strspn(argv[1], argv[2]));
		printf("Result_O: %ld\n", strspn(argv[1], argv[2]));
	}
	return (0);
}
