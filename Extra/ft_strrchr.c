/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:30:55 by jflorido          #+#    #+#             */
/*   Updated: 2022/12/30 18:30:53 by arlo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ExamRank02_Prep.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*str;

	str = (char *)s;
	len = ft_strlen(str);
	if (!str)
		return ("Error in the string");
	while (len > 0)
	{
		if (str[len] == (char)c)
			return (&str[len]);
		len--;
	}
	if ((char)c == '\0')
		return (&str[len]);
	return (0);
}

//int	main(void)
//{
//	char	*text;
//	char	letter;
//
//	text = "This is a text";
//	letter = 'X';
//	printf("Position to the letter found: %p\n", ft_strrchr(text, letter));
//	return (0);
//}