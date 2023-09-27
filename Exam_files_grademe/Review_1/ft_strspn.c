/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:49:38 by jflorido          #+#    #+#             */
/*   Updated: 2023/09/27 16:07:20 by jflorido         ###   ########.fr       */
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
*/
#include <string.h>
#include <stdio.h>

int	ft_check_char(const char *str, char c)
{
	int	i;

	i= -1;
	while (str[++i])
	{
		if (str[i] == c)
			return (0);
	}
	return (1);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;

	i = -1;
	while (s[++i])
	{
		if (ft_check_char(accept, s[i]) == 1)
			return (i);
	}
	return (0);
}

int	main(void)
{
	char	*s;
	char	*accept;

	s = "abcdefghijk";
	accept = "zzabzdc";
	printf("Res_original: %ld\n", strspn(s, accept));
	printf("Res_created: %ld\n", ft_strspn(s, accept));
	return (0);
}
