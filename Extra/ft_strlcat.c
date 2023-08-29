/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 13:26:13 by jflorido          #+#    #+#             */
/*   Updated: 2023/01/17 10:41:36 by arlo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ExamRank02_Prep.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if (!dst || !src)
		return (0);
	i = 0;
	while (dst[i] != '\0' && i < dstsize)
		i++;
	j = 0;
	while (src[j] != '\0' && (i + j + 1) < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < dstsize)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

//int	main(void)
//{
//	char	text1[50] = "This is the first text.";
//	char	text2[50] = "This is the second text.";
//	char	text3[] = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
//	size_t	result;
//
//	printf("Text1 before change with original function: %s\n", text1);
//	result = strlcat(text1, text3, 3);
//	printf("Text1 after change with original function: %s\n", text1);
//	printf("Result: %zu\n", result);
//	printf("Text2 before change with original function: %s\n", text2);
//	result = ft_strlcat(text2, text3, 3);
//	printf("Text2 after change with original function: %s\n", text2);
//	printf("Result: %zu\n", result);
//}