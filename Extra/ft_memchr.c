/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:10:35 by jflorido          #+#    #+#             */
/*   Updated: 2023/01/17 09:39:10 by arlo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ExamRank02_Prep.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	if (!str)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char) c)
			return (&str[i]);
		i++;
	}
	return (0);
}

//int	main(void)
//{
//	char	*text1;
//
//	text1 = "This is a test1";
//	printf("Original %p\n", memchr(text1, 'x', 16));
//	printf("Created %p\n", ft_memchr(text1, 'x', 16));
//	return (0);
//}