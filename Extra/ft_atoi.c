/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 13:05:15 by jflorido          #+#    #+#             */
/*   Updated: 2022/12/30 18:30:53 by arlo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ExamRank02_Prep.h"

int	sign_count(char *str)
{
	int	counter;
	int	i;

	i = 0;
	counter = 0;
	while (!(str[i] >= 48 && str[i] <= 57))
	{
		if (str[i] == 43 || str[i] == 45)
			counter++;
		i++;
	}
	if (counter > 1)
		return (0);
	else
		return (1);
}

int ft_atoi(const char *str)
{
	size_t	i;
	size_t	n;
	char	*s;
	int	sign;

	s = (char *)str;
	i = 0;
	if (!str)
		return (0);
	while ((s[i] != '\0' && s[i] >= 9 && s[i] <= 13) || (str[i] == 32))
		i++;
	sign = 1;
	while (s[i] != '\0' && (s[i] == 43 || s[i] == 45))
	{
		if (sign_count((char *)str) == 0)
			return (0);
		if (s[i] == 45)
			sign = -1;
		i++;
	}
	n = 0;
	while (s[i] != '\0' && str[i] >= 48 && str[i] <= 57)
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n * sign);
}

//int	main(void)
//{
//	char	*test;
//
//	test = "    -12---++";
//	printf("Number got with original: %d\n", atoi(test));
//	printf("Number got with created: %d\n", ft_atoi(test));
//	return 0;
//}