/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 09:56:43 by jflorido          #+#    #+#             */
/*   Updated: 2022/12/30 18:30:53 by arlo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ExamRank02_Prep.h"

int	ft_isdigit(int n)
{
	if (n >= 0 && n <= 9)
		return (1);
	else
		return (0);
}

//int	 main()
//{
//	int	i;
//
//	i = 65;
////	printf("Enter a number between 0 and 9\n");
////	scanf("%d",i);
//	printf("Is digit? (%d)", ft_isdigit(i));
//	return (0);
//}