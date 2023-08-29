/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:35:37 by jflorido          #+#    #+#             */
/*   Updated: 2023/01/17 09:12:11 by arlo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ExamRank02_Prep.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	if (len > (size_t)ft_strlen((char *)dst))
		len = (size_t)ft_strlen((char *)dst);
	if (dst < src)
	{
		i = 0;
		while (i < len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			((char *)dst)[len] = ((char *)src)[len];
			len--;
		}
	}
	return (dst);
}

//int	main(void)
//{
//	char	dest[] = "123";
//	char 	origin[] = "XXXXX"; //5
//	char	dest2[] = "123";
//	char 	origin2[] = "XXXXX"; //5
//
//	printf("Original function before change: %s\n", dest);
//	memmove(dest, origin, 3);
//	printf("Original function after change: %s\n", dest);
//	printf("Created function before change: %s\n", dest2);
//	ft_memmove(dest2, origin2, 14);
//	printf("Created function after change: %s\n", dest2);
//	return (0);
//}