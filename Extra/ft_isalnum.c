/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:13:11 by jflorido          #+#    #+#             */
/*   Updated: 2022/12/30 18:30:53 by arlo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ExamRank02_Prep.h"

int	ft_isalnum(int n)
{
	if (ft_isdigit(n) == 1 || ft_isalpha((char) n) == 1)
		return (1);
	else
		return (0);
}

//int	main(void)
//{
//	int	i;
//
//	i = 150;
//	printf("Is alnum? (%d)\n", ft_isalnum(i));
//	return (0);
//}