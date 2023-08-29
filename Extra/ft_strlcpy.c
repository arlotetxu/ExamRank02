/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 13:27:54 by jflorido          #+#    #+#             */
/*   Updated: 2023/01/17 10:15:00 by arlo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ExamRank02_Prep.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = ft_strlen((char *)src);
	if (!dst || !src)
		return (0);
	if (size > 0)
	{
		i = 0;
		while (i < size - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (j);
}

//int	main(void)
//{
//	char	text1[] = "123456789";
//	char	text2[] = "ABCDEFGH";
//	char	text3[] = "XXXX";
//
//	printf("Text1 before change with original function: %s\n", text1);
//	strlcpy(text1, text3, 3);
//	printf("Text1 after change with original function: %s\n", text1);
//	printf("Text2 before change with created function: %s\n", text2);
//	strlcpy(text2, text3, 3);
//	printf("Text2 after change with created function: %s\n", text2);
//	return (0);
//}
