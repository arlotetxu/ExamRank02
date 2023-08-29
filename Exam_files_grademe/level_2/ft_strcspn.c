/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:51:45 by jflorido          #+#    #+#             */
/*   Updated: 2023/08/20 13:04:27 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
The strcspn() function returns the number of bytes in the initial segment of s which are not in the string re‐
       ject.

*/
#include <stddef.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

int	main (int argc, char **argv)
{
	size_t	result;

	if (argc == 3)
	{
		result = ft_strcspn(argv[1], argv[2]);
		printf("Result: %ld\n", result);
		printf("Result_O: %ld\n", strcspn(argv[1], argv[2]));
	}
	return (0);
}
