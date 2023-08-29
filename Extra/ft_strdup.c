/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 13:05:01 by jflorido          #+#    #+#             */
/*   Updated: 2022/12/30 18:30:53 by arlo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ExamRank02_Prep.h"

char *ft_strdup(const char *s1)
{
	char	*str;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	str = malloc(sizeof(*s1) * (len + 1));
	i = 0;
	if (!str)
		return (NULL);
	while (s1 && i < len)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

//int	main(void)
//{
//	char	*text1;
//	char	*text2;
//	char	*text3;
//	char	*text4;
//
//	text1 = "This is the first text";
//	text2 = ft_strdup(text1);
//	text3 = "Original";
//	text4 = strdup(text3);
//	printf("Text1: %s\n", text1);
//	printf("Text2: %s\n", text2);
//	printf("Text2: %s\n", text2);
//	printf("Text3: %s\n", text3);
//	printf("Text4: %s\n", text4);
//	return 0;
//}