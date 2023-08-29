/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:42:51 by jflorido          #+#    #+#             */
/*   Updated: 2022/12/30 18:30:53 by arlo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ExamRank02_Prep.h"

/*
 * Controles a implemetar:
 * 1 - No existe s
 * 2 - start es posterior a la ultima posicion de la cadena s
 * 3 - el valor de len hace que leas mas alla del final de s
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	s_len;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	str = malloc(sizeof (char) * (len + 1));
	if (!str)
		return (NULL);
	if (((size_t)start) > s_len)
	{
		printf("Wrong parameter value at 'start'. It is greater than string length\n");
		return (NULL);
	}
	if (len > (s_len - ((size_t)start)))
	{
		printf("Wrong parameter value at 'len'. It is greater than the number of characters remaining from start.\n");
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		str[i++] = s[start++];
	}
	str[i] = '\0';
	return (str);
}

//int	main(void)
//{
//	char	*text1;
//
//	text1 = "This is a test"; //14
//	printf("result: %s\n", ft_substr(text1, 12, 2));
//	return 0;
//}