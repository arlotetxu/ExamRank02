/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 11:43:57 by jflorido          #+#    #+#             */
/*   Updated: 2023/01/17 11:41:51 by arlo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//
// Created by Jose Manuel Florido Pereña on 19/12/22.
//
#include "ExamRank02_Prep.h"
#include <string.h>

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;
	size_t	j;

	if (!n)
		return ((char *)h);
	i = 0;
	j = 0;
	while (h && i <= len)
	{
		if (h[i] == n[j])
		{
			while (h[i + j] == n[j] && (i + j) < len)
			{
				if (n[j + 1] == '\0')
					return ((char *)&h[i]);
				j++;
			}
			j = 0;
		}
		i++;
	}
return (0);
}

//int	main(void)
//{
//	char	*text1;
//	char	*text2;
//	char	*test_origin;
//	char	*test_created;
//
//	text1 = "Foo Bar Baz";
//	text2 = "oo";
//	test_origin = strnstr(text1, text2, 9);
//	test_created = ft_strnstr(text1, text2, 9);
//	printf("Original result: %s\n", test_origin);
//	printf("Created result: %s\n", test_created);
//	return (0);
//}