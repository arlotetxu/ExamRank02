/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:03:47 by jflorido          #+#    #+#             */
/*   Updated: 2023/10/12 18:13:29 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name	: ft_strspn
Expected files	: ft_strspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the strspn function 
(man strspn).

The function should be prototyped as follows:

size_t	ft_strspn(const char *s, const char *accept);

size_t
     strspn(const char *s, const char *charset);

DESCRIPTION
     The strspn() function spans the initial part of the null-terminated string s as long as the characters from s occur
     in the null-terminated string charset.  In other words, it computes the string array index of the first character of
     s which is not in charset, else the index of the first null character.
*/

#include <string.h>
#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;

	i = -1;
	if (!s || !accept)
		return (0);
	while (s[++i])
	{
		if (s[i] != accept[i])
			return (i);
	}
	return (i);
}

int	main(void)
{
	char	*s;
	char	*accept;

	s = "abcde";
	accept = "a";
	printf("Res_C: %lu\n", ft_strspn(s, accept));
	printf("Res_O: %lu\n", strspn(s, accept));
	return (0);
}