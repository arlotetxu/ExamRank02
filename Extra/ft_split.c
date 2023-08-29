/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:17:03 by jflorido          #+#    #+#             */
/*   Updated: 2023/01/17 16:04:10 by arlo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ExamRank02_Prep.h"

int	ft_num_strings(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!s)
		return 0;
	// Control to 
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int 	j;
	int 	num_str;

	if (!s)
		return (NULL);
	str = malloc (sizeof (char *) * (ft_num_strings(s, c) + 1));
	if (!str)
		return (NULL);
	i = 0;
	num_str = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c)
		{
			j = i;
			while (s[i] && s[i] != c)
				i++;
			str[num_str] = ft_substr(s, (unsigned int)j, (size_t) i - j);
			num_str++;
			//continue;
		}
		else
			i++;
	}
	str[num_str] = 0;
	return (str);
}


//int	main(void)
//{
//	char	text1[] = "This is a test";
//	char	c;
//	char	**result;
////
//	c = 's';
//	result = ft_split(text1, c);
//	printf("Result: %s\n", result[0]);
//	printf("Result: %s\n", result[1]);
//	printf("Result: %s\n", result[2]);
//	printf("Result: %s\n", result[3]);
//	return (0);
////	printf("Num strings: %d\n", ft_num_strings(text1, c));
//	return 0;
//}