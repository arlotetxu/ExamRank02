/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:17:21 by jflorido          #+#    #+#             */
/*   Updated: 2022/12/30 18:30:53 by arlo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ExamRank02_Prep.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

//int main(void)
//{
//	char	dest[] = "1111111111";
//	char	orig[] = "0000000000";
//
//	char	dest2[] = "1111111111";
//	char	orig2[] = "0000000000";
//
//	printf("Original Function Destination before: %s\n", dest);
//	memcpy(dest, orig, 4);
//	printf("Original Function Destination after: %s\n", dest);
//	printf("Created Function Destination before: %s\n", dest2);
//	ft_memcpy(dest2, orig2, 4);
//	printf("Created Function Destination after: %s\n", dest2);
//	return (0);
//}