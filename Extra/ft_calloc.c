/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:24:15 by jflorido          #+#    #+#             */
/*   Updated: 2023/01/17 12:28:05 by arlo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ExamRank02_Prep.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	ptr = malloc(size * count);
	if (!ptr)
		return (NULL);
	else
		//ft_memset(ptr, '0', count * size);
		ft_bzero(ptr, count * size);
	return (ptr);
}

//int	main(void)
//{
//	char	*str;
//
//	str = ft_calloc(5, 4);
//	printf("String after function: %s\n", str);
//	return 0;
//}