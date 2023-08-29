/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 19:10:09 by jflorido          #+#    #+#             */
/*   Updated: 2023/01/07 10:57:19 by arlo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ExamRank02_Prep.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s1 != '\0' || *s2 != '\0') && n > 0)
	{
		if (*s1 != *s2)
			return (((unsigned char) *s1) - ((unsigned char) *s2));
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (((unsigned char) *s1) - ((unsigned char) *s2));
}

//int	main(void)
//{
//	char	text1[] = "testss"; //92
//	char	text2[] = "testsx";
//
//	int		i;
//	int		j;
//
//	i = strncmp(text1, text2, 7);
//	j = ft_strncmp(text1, text2, 7);
//
//	printf("Text1 length: %zu\n", ft_strlen(text1));
//	printf("Text2 length: %zu\n", ft_strlen(text2));
//	printf("The value the original function returns: %d\n", i);
//	printf("The value the created function returns: %d\n", j);
//	return (0);
//}