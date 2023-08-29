/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 14:07:41 by jflorido          #+#    #+#             */
/*   Updated: 2023/08/20 14:39:59 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
       The strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept.

RETURN VALUE
       The  strpbrk() function returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if
       no such byte is found.
*/

#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int j;

	while(*s1)
	{
		j = 0;
		while (s2[j])
		{
			if (*s1 == s2[j])
				return ((char *)s1);
			j++;;
		}
		s1++;
	}
	return (NULL);
}

int	main(int argc, char **argv)
{

	if (argc == 3)
	{
		printf("result: %s\n", ft_strpbrk(argv[1], argv[2]));
		printf("result_O: %s\n", strpbrk(argv[1], argv[2]));
	}
	return (0);
}
